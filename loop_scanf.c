#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    while (num >= 0) {
        printf("%d\n", num);
        --num;
    }
    
    return 0;
}