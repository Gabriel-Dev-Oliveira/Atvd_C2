#include <stdio.h>

int main() {
    char menu[3][10] = {"agua", "refrigerante", "suco"};
    char escolha;
    
    printf("Escolha um dos itens do menu:\n1- água\n2- refrigerante\n3- suco\n");
    printf("escreva o que deseja: ");
    scanf(" %c", &escolha);

    if (escolha == menu[0][0]) {
        printf("Você escolheu água.\n");
    } else if (escolha == menu[1][0]) {
        printf("Você escolheu refrigerante.\n");
    } else if (escolha == menu[2][0]) {
        printf("Você escolheu suco.\n");
    } else {
        printf("Não está no menu.\n");
    }

    return 0;
}
