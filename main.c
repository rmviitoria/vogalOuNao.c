/******************************************************************************

Crie um programa que solicita que o usuário digite uma letra e imprime na tela se a letra é ou não é uma vogal.

*******************************************************************************/
#include <stdio.h>


int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra); 

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("%c é uma vogal.\n", letra);
    } else {
        printf("%c não é uma vogal.\n", letra);
    }

    return 0; 
}
