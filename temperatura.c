#include <stdio.h>

int main(){
    float temperatura;

    printf("Digite a temperatura atual em Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura > 30){
        printf("Muito quente \n");
    } else {
        printf("Temperatura agradável \n");
    }
    return 0;
}