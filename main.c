#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("hello, world\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &A);

    printf("Digite o segundo numero: ");
    scanf("%d", &B);

    resultado = A + B;

    printf("\n%.2d + %.2d = %.2d\n", A, B, resultado);

    return 0;
}