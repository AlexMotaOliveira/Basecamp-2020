#!/bin/sh
#find -search for files in a directory hierarchy
# '.' -busca em todos os subdiretorios// -type f para listar arquivos
# -name parametro de busca 
# -exec .... {} \; executa algo apos a busca pelo find
# basename -strip directory and suffix from filenames

find . -type f -name '*.sh' -exec basename -s .sh \ {} \; 
