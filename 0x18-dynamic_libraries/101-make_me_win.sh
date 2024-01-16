#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Adeakin/alx-low_level_programming/main/0x18-dynamic_libraries/libhackit.so
export LD_PRELOAD="$PWD/../libhackit.so"
