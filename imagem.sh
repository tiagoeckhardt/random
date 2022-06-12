#!/bin/bash
# definir parâmetros das variáveis dadas
IMAGEM1=${1%.*}
IMAGEM2=${2%.*}
# Converter tamanho de imagem no caso de terem diferentes tamanhos 
convert $1 -resize 200x200 $IMAGEM1-s.jpg
convert $2 -resize 200x200 $IMAGEM2-s.jpg
# Mesclar imagens
composite $IMAGEM1-s.jpg -compose Multiply $IMAGEM2-s.jpg mescla`date +%Y-%m-%d_%H-%M-%S`.jpg
