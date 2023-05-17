#!/bin/bash
wget https://github.com/kishea-dev/alx-low_level_programming/blob/e94bce4e864c295764fa17ebc9ce8e09a978aea1/0x18-dynamic_libraries/lib.so -o /tmp/lib.so
export LD_PRELOAD=/tmp/lib.so
