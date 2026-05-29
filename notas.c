#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float nota3;
    float resultado;

    printf("Digite a nota do primeiro trimestre: ");
    scanf("%f", &nota1);

    printf("Digite a nota do segundo trimestre: ");
    scanf("%f", &nota2);

    printf("Digite a nota do terceiro trimestre: ");
    scanf("%f", &nota3);

    resultado = (nota1 + nota2 + nota3) /3;

    printf("A média das notas é: %.2f\n", + resultado);

    if (resultado >= 6){
        printf("Passou de ano. EBAAAA \n");
    } else {
        printf("Reprovou. Oh NO \n");
    }
    return 0;
}