#!/bin/bash
wget -P /tmp https://github.com/Toby2507/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
