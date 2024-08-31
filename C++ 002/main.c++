#include <iostream>

int main()
{
    int x, y;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> x;

    std::cout << "Digite o segundo numero: ";
    std::cin >> y;

    int soma = x + y;
    int sub = x - y;
    int mult = x * y;
    int div = x / y;
    int resto = x % y;

    printf("A soma e: %d \n", soma);
    printf("A subtracao e: %d \n", sub);
    printf("A multiplicacao e: %d \n", mult);
    printf("A divisao e: %d \n", div);
    printf("O resto da divisao e: %d \n", resto);

    return 0;
}