#!/bin/sh
#find -search for files in a directory hierarchy
# '.' -busca em todos os subdiretorios// 
# wc-l -print the newline counts
# tr-d -delete characters in 'SET1'

find . | wc -l | tr -d ' ' 
