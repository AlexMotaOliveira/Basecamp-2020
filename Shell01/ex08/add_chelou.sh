#!/bin/sh

echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"\?\!"  01234 | tr 'mrdoc' 01234 | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'

# echo - imprime as variaveis FT
# sed  - faz a troca do \\ por 1
# tr   - faz a troca do '"?! por 0234
# xargs- executa novas funções de acordo com o resultado
# echo  - envia para o bc os calculos com as bases
# bc    - faz a soma das variaveis
# tr    - transforma o resultado de bc em nova saida

