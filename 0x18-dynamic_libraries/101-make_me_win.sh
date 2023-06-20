#!/bin/bash
wget -P /tmp https://github.com/Toby2507/alx-low_level_programming/blob/11efce568cb34b8ddefd973d01c01f0c73848b66/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
