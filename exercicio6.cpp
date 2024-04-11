#include <iostream>

int main(){
    int ano, is_bissexto;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    
    printf("O ano é bissexto");
    } else {
    printf("O ano nao é bissexto");
}
    
    return 0;

}
