#include <stdio.h>
#include <stdlib.h>
void main(){
    float n1, n2, n3, n4, media;
    int contador; 
    char nome[30],continua; 
    continua = 's';
    while ( continua == 's'){
    printf("digitete o nome do aluno: \n");
    scanf("%s", &nome);
    printf("digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("digite a terceira nota: \n");
    scanf("%f", &n3);
    printf("digite a quarta nota: \n");
    scanf("%f", &n4);
    media = (n1+n2+n3+n4)/4;
    
    contador=contador+1;
    printf(" a media do %s é: %.2f", nome,media);
    printf("Tecle 's' se deseja continuar\n");
    scanf("%s",&continua);
    
    
    }
    return;
    
}
