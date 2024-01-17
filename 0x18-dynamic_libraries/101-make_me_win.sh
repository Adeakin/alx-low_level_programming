#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Adeakin/alx-low_level_programming/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
