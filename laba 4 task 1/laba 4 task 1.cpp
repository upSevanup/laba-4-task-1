#include <iostream>
#include <clocale>

using namespace std;

/*лабораторная работа 4. Поливцев Михаил, ИВТ-31. Задание 1. индивидуальный вариант 16.
* Дано вещественное число B, целое число N и набор из N вещественных чисел, упорядоченных по возрастанию. Вывести элементы
* набора вместе с числом B, сохраняя упорядоченность выводимых чисел. 
*/

int main() {
	setlocale(LC_ALL, "ru");

	int n, i = 2;
	double b, old, num;

	cout << "Введите n: ";
	cin >> n;
	cout << "Введите b: ";
	cin >> b;
	
	// проверка что b не самое маленькое число в последовательности 
	if (n > 0) {
		cout << "Введите число: ";
		cin >> num;
		old = num;
		if (b < old) {
			cout << b << endl;
		}
		cout << num << endl;
	}
	

	while (i <= n) {
		cout << "Введите число: ";
		cin >> num;

		if (num < old) {
			cout << "последовательность должна возрастать!" << endl;
			continue;
		}

		if (old < b && b < num) {
			cout << b << endl;
			cout << num << endl;
			old = num;
		}
		else {
			cout << num << endl;
			old = num;
		}
		i++;
	}
}

