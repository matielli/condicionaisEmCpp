#include <iostream>
int main(){
    int num1, num2, num3;
    

    printf("Digite um numero. \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero. \n");
    scanf("%d", &num2);
    printf("Escolha a operacao que voce deseja realizar. \n 1(+), 2(-), 3(*), 4(/):");
    scanf("%d", &num3);

    if (num3 == 1) {
        int soma= ( num1 + num2);
        printf("A soma é igual %d\n.", (num1 + num2));
    }
    else if (num3 == 2){  
        printf("A subtracao é igual %d\n.", (num1 - num2));
    }
    else if (num3 == 3){  
        printf("A multiplicacao é igual %d\n.", (num1 * num2));
    }
        else if (num3 == 4){  
        printf("A divisao é igual %d\n.", (num1 / num2));
        }

        return 0;


    }





