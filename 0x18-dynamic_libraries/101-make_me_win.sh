#!/bin/bash
wget -O /tmp/libinject.so https://raw.github.com/Ineffable22/holbertonschool-low_level_programming/main/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=/tmp/libinject.so
