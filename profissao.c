#include <stdio.h>

int main() {
    char nome[100], profissao[100];
    int idade;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua profissão: ");
    scanf("%s", profissao);
    
    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Sua profissão é: %s\n", profissao);
}