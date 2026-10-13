#!/bin/sh
# Run the native build for N seconds (default 10), then print where every guest thread is:
# the innermost recompiled functions (F_XXXXXXXX) of each host thread.
cd "$(dirname "$0")/.."
secs=${1:-10}
out=build/where.txt
timeout $((secs + 20)) gdb -q -batch -ex 'set debuginfod enabled off' -ex 'set print thread-events off' \
    -ex run -ex 'thread apply all bt 12' --args ./build/sstheh -q > $out 2>&1 &
sleep "$secs"
pkill -INT -f 'build/sstheh -q'
sleep 3
awk '/^Thread /{t=$0; n=0} /^#/{ if ($0 ~ / F_[0-9A-F]+ /) { match($0, /F_[0-9A-F]+/); s = s " " substr($0, RSTART+2, 8); n++ }
     else if ($0 ~ /sema_wait|switch_away|SleepThread|timer_main|leave_cpu/) { match($0, /in [a-z_]+/); k = substr($0, RSTART+3, RLENGTH-3) }
     } /^$/{ if (t != "") print t ":" (k ? " [" k "]" : "") s; t=""; s=""; k="" } END { if (t != "") print t ":" (k ? " [" k "]" : "") s }' $out | sed 's/(Thread 0x[0-9a-f]* (LWP [0-9]*) "sstheh")//'
