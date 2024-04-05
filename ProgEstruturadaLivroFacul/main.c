#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>

int calcularMDC(int a, int b);

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Algoritmos e Programa��o Estruturada em C & color 0A");

    int n1, n2, resultado;

    printf("Digite dois n�meros inteiros positivos: ");
    scanf("%d%d", &n1, &n2);

    resultado = calcularMDC(n1, n2);

    printf("\nMDC: %d\n", resultado);

    return 0;
}

int calcularMDC(int a, int b) {
    int r = a % b;

    if(r == 0) {
        return b;
    }
    else {
        return calcularMDC(b, r);
    }
}
