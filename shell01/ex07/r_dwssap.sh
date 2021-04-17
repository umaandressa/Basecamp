#!/bin/bash

cat /etc/passwd | awk -F : '{print $1}' | sed -n 2~2p | rev | sort -r  | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | sed s/$/,/ |  tr '\n' ' ' | sed 's/, $/./'