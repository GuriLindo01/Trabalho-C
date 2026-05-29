#include <stdio.h>

int main(){
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 10){
        printf("O número é maior que dez \n");
    } else {
        printf("O número é menor que dez \n");
    }
    return 0;
}