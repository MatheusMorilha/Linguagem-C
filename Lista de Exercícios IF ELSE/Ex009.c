/*Fazer um programa para ler a duas notas, calcular e mostrar a média com a mensagem:
Inferior a 5,0 – “Reprovado”
De 5,1 a 6,9 – “Exame”
De 7,0 a 10 – “Aprovado”
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media < 5){
        printf("Media: %.2f", media);
        printf("\nREPROVADO\n\n");
    }else if(media >= 5.1 && media <= 6.9){
        printf("Media: %.2f", media);
        printf("\nEXAME\n\n");
    }else if(media >= 7 && media <=10){
        printf("Media: %.2f", media);
        printf("\nAPROVADO\n\n");
    }else{
        printf("\nMEDIA INVALIDA, REVEJA AS NOTAS INFORMADAS\n\n");
    }


}