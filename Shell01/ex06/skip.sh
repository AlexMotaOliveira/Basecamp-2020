#!/bin/sh
#ls -l list directory contents -l  use a long listing format
#awk  pattern scanning and text processing language
#'0 == NR % 2' print linha sim e não iniciando de 0
ls -l | awk '0 == NR % 2'