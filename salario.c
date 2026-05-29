#include <stdio.h>

int main(){
    float salario;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    if (salario < 2000){
        printf("Você tem direito ao auxílio pobre \n");
    } else {
        printf("Você não tem direito ao auxílio pobre \n");
    }
    return 0;
}