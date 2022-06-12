#!/bin/bash
#Gerar nova saída de espectrograma    
sox $1 -n spectrogram -m -a -r -l -o $1.png    
sox $2 -n spectrogram -m -a -r -l -o $2.png    
#Comparar imagens ao usar os pixels pode diferir em até 53% antes de ser considerado diferente        
COMPARAR=`compare -fuzz 53% -metric AE $1.png $2.png null: 2>&1`    
if [[ $COMPARAR -eq 0 ]]; then    
#Ensinar ao fundir as imagens para posteriormente inferir
composite $1.png -compose Multiply $2.png aprender`date +%Y-%m-%d_%H-%M-%S`.png    
fi    
