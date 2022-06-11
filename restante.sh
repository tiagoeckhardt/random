#!/bin/bash
NUMERO=$1 
RESTANTE=$(( $NUMERO % 2 ))
if [ $RESTANTE = 0 ]
then
  echo "$NUMERO é um número par"
else
  echo "$NUMERO é um número ímpar"
fi
