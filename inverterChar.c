#include <stdio.h>

int main() {
    char str[11], revStr[11];
    int i, len = 0;

    printf("Digite uma frase de até 10 caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Calcula o comprimento da string
    while (str[len] != '\n') {
        len++;
    }

    // Inverte a string
    for (i = 0; i < len; i++) {
        revStr[i] = str[len - 1 - i];
    }

    revStr[len] = '\0'; // Adiciona o caractere nulo no final

    printf("String invertida: %s\n", revStr);

    return 0;
}
