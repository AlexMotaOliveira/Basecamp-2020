#!/bin/sh
#ifconfig - configure a network interface
#grep  -print lines that match patterns 'SET1'
# cut-c -remove sections from each line of files

ifconfig | grep "ether" | cut -c 15-

