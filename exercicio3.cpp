#include <iostream>

int main(){
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (num %15 == 0) {
        printf("O numero digitado é multiplo de 3 ou 5.\n");
        }
        else {
        printf("O número digitado nao é multiplo de 3 ou 5.\n");
    }
    return 0;

}