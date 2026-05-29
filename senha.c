#include <stdio.h>

int main(){
    int senha;

    do {
    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (senha == 2025){
        printf("Senha correta \n");
    }else{
        printf("Senha incorreta\n");
    }
    } while (senha != 2025);
    return 0;
}