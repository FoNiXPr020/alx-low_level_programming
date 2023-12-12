#!/bin/bash
wget -P /tmp https://github.com/FoNiXPr020/alx-low_level_programming/raw/master/0x18-dynamic_libraries/xrandom.so
export LD_PRELOAD=/tmp/xrandom.so

