#!/bin/bash
BARALHAR() {
    local a=$1 i
    BARALHADOS=
    while((${#a})); do
        ((i=RANDOM%${#a}))
        BARALHADOS+=${a:i:1}
        a=${a::i}${a:i+1}
    done
}
BARALHAR $1
echo $BARALHADOS > nucleotideos.txt
