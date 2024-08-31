#include <iostream>

int Soma() {
    int x = 5, y = 20;
    return x + y;
}

int Subtracao() {
    int x = 5, y = 20;
    return x - y;
}

int Multiplicacao() {
    int x = 5, y = 20;
    return x * y;
}

int Divisao() {
    int x = 5, y = 20;
    return x / y;
}

int main() {
    int resultadoSoma = Soma();
    printf("Soma: %d\n", resultadoSoma);

    int resultadoSubtracao = Subtracao();
    printf("Subtracao: %d\n", resultadoSubtracao);

    int resultadoMultiplicacao = Multiplicacao();
    printf("Multiplicacao: %d\n", resultadoMultiplicacao);

    int resultadoDivisao = Divisao();
    printf("Divisao: %d\n", resultadoDivisao);

    return 0;
}
