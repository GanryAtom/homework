#include "inout.h" //подключаю заголовочный файл и нужные библиотеки
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); // меняю локализацию
	vector <int> vec; // создание вектора
	read(vec); // вызов функции для записи значений в вектор
	sort(vec.begin(), vec.end()); // сортировка вектора
	print(vec); // вывод в консоль элементов вектора
	return 0;
}