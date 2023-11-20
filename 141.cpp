#include <iostream>
int main() {
	setlocale(0, ""); using namespace  std;
	const int c{100}; //размер массива
	char x[c]; //массив
	cout << "Введите массив:"; cin.getline(x, c); //ввод значений в массив
	int v{}; // счетчик
	for (; v < c and x[v] != '\0'; ++v) { cout << "количество символов: " << v<<endl; }
	for (int b{ 1 }; b <= v; ++b) {
		cout << x[v - b];
	}
	cout << endl;
}

