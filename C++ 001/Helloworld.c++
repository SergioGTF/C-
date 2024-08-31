#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	cout << "Olá mundo \n";

	system("pause");
	return 0;
}