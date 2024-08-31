#include <iostream>

int main(){
    int num;

    std::cout << "Digite um numero: ";
    std::cin >> num;

    if(num > 1){
        printf("Numero positivo");
    } else if (num < 0) {
        printf("Numero negativo");
    }
}