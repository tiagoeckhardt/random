#!/bin/bash
i=0
VARIAVEIS=`while [ $i -lt 3 ]; do echo ${RANDOM:0:2}; i=$[$i+1]; done`
NUMEROS=$(sort -r <<<"${VARIAVEIS}")
echo $NUMEROS
for DIGITO in $NUMEROS; do echo "$DIGITO é o número maior"; break; done
