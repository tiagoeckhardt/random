#include <stdio.h>

void main(){
    float nota1, nota2;
    double media;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    media=(nota1+nota2)/2.;
    printf("A media das notas é: %.1f\n", media);
    if (media>0 && media<7)
           printf("Reprovado\n");
    else if (media>=7 && media<10)
        printf("Exame");
    else if (media>=10 && media<=20)
        printf("Aprovado\n");
    else
        printf("Média incorreta!\n");
}
