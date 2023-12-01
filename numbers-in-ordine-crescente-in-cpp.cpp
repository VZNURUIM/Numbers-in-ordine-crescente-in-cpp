// Escreva um programa para ler três inteiros e imprimi - los em ordem crescente.

#include <iostream>

using namespace std;

int main() {
	//Variáveis que vai conter os números.
	double number_one, number_two, number_three;

	cout << "Write one number: ";
	cin >> number_one;

	cout << "Write other number: ";
	cin >> number_two;

	cout << "Write other number: ";
	cin >> number_three;

	if (number_one > number_two and number_one > number_three and number_two > number_three) {
		cout << "Numbers in orde crescent: " << number_three << ' ' << number_two << ' ' << number_one;
	}
	else if (number_one > number_two and number_one > number_three and number_three > number_two) {
		cout << "Number in orde crescent: " << number_two << ' ' << number_three << ' ' << number_one;
	}
	else if (number_two > number_one and number_two > number_three and number_one > number_three) {
		cout << "Number in orde crescent: " << number_three << ' ' << number_one << ' ' << number_two;
	}
	else if (number_two > number_one and number_two > number_three and number_one < number_three) {
		cout << "Number in orde crescent: " << number_one << ' ' << number_three << ' ' << number_two;
	}
	else if (number_three > number_one and number_three > number_two and number_one > number_two) {
		cout << "Number in orde crescent: " << number_two << ' ' << number_one << ' ' << number_three;
	}
	else if (number_three > number_two and number_three > number_one and number_two > number_one) {
		cout << "Number in rode crescent: " << number_one << ' ' << number_two << ' ' <<  number_three;
	}

	return 0;
}
