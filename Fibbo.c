#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci: ");

    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    if (n == t1 || n == 0)
        printf("\n%d pertence à sequência de Fibonacci.\n", n);
    else
        printf("\n%d não pertence à sequência de Fibonacci.\n", n);

    return 0;
}

