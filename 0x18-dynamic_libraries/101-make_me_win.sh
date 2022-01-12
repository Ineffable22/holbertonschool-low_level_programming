#!/bin/bash
wget -O /tmp/libout_put.so https://raw.github.com/Ineffable22/holbertonschool-low_level_programming/main/0x18-dynamic_libraries/liboutput.so
export LD_PRELOAD=/tmp/libout_put.so
