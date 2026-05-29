#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 5 == 0){
        printf("E divisível \n");
    } else {
        printf("Não é divisível \n");
    }
    return 0;
}