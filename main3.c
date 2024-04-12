#include <stdio.h>

int main() {
    int a, b, c;

    // Solicita os três lados do triângulo
    printf("Insira o primeiro lado: ");
    scanf("%i", &a);

    printf("Insira o segundo lado: ");
    scanf("%i", &b);

    printf("Insira o terceiro lado: ");
    scanf("%i", &c);

    // Verifica se os lados formam um triângulo
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
       
        // Verifica o tipo de triângulo
        if (a == b && a == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}