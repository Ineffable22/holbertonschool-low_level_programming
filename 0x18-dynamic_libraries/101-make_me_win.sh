#!/bin/bash
wget -P /tmp https://github.com/Ineffable22/holbertonschool-low_level_programming/tree/main/0x18-dynamic_libraries/liboutput.so
export LD_PRELOAD=/tmp/liboutput.so
