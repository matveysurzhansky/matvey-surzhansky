#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	int c;
	cout << "цена за один кило €блок";
	cin >> a;
	cout << "сколько кило берешь ?";
	cin >> b;
	c = a * b;
	cout << "цена за покупку " << c;






}