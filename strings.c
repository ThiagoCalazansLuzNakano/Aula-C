#include<stdio.h>
#include<string.h>

int main(){
    char nome[20];
    printf("Digite o seu nome completo:");
    //scanf("%s", &nome);
    fgets(nome, 20, stdin);
    printf("O seu nome e: %s", nome);
    return 0;
}