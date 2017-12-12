#!/bin/bash
wget -q https://github.com/magezil/holbertonschool-low_level_programming/blob/master/0x17-dynamic_libraries/win.so
export LD_PRELOAD=$PWD/win.so
