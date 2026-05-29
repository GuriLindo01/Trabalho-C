#include <stdio.h>

int main(){
    int numero1;
    int numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2){
        printf("O número 1 é o maior \n");
    } else {
        printf("O número 2 é o maior \n");
    }
    return 0;
}