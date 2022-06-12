#!/bin/bash
IMAGEM1=${1%.*}
IMAGEM2=${2%.*}
convert $1 -crop 5x5@ +repage +adjoin $IMAGEM1-%d.jpg
convert $2 -crop 5x5@ +repage +adjoin $IMAGEM2-%d.jpg
for image in {0..24}
do
compare -fuzz 53% -metric AE $IMAGEM1-$image.jpg $IMAGEM2-$image.jpg null: 2>> output.out
printf "\n" >> output.out
done
