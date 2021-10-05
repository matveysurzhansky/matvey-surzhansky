// матвей суржанский п43021 вариант 2
//Написать программу вычесления стоимости некоторого количества яблок по весу.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	int c;
	cout << "цена за один кило яблок";
	cin >> a;
	cout << "сколько кило берешь ?";
	cin >> b;
	c = a * b;
	cout << "цена за покупку " << c;
}
