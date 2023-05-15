#include <stdio.h>

int main() {
    char nomes[2][35];
    int idades[2][3];
    
    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nomes[0]);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idades[0][0]);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nomes[1]);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idades[1][0]);
    
    printf("O primeiro usuário se chama %s\n", nomes[0]);
    printf("A idade do primeiro usuário é: %d\n", idades[0][0]);
    printf("O segundo usuário se chama %s\n", nomes[1]);
    printf("A idade do segundo usuário é: %d\n", idades[1][0]);
    return 0;
}