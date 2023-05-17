#!/bin/bash
wget https://github.com/kishea-dev/alx-low_level_programming/master/0x18-dynamic_libraries/lib.so -o /tmp/lib.so
export LD_PRELOAD=/tmp/lib.so
