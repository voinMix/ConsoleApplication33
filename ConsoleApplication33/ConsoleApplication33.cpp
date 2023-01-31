#include <iostream>
#include <vector>
#include <array>
#include <numeric> // iota можно использовать только при импортировании бибилиотеки numeric
#include <algorithm>
using namespace std;
int main()
{
	array<int, 10> arr; // создание контейнера array

	iota(arr.begin(), arr.end(), 1); // заполнение контейнера методом iota

	for_each(arr.begin(), arr.end(), [](auto item) {cout << item << " "; }); // вывод контейнера через метод for_each для проверки
	cout << endl;

	vector<int> vec(10); // создание контейнера vector

	reverse_copy(arr.begin(), arr.end(), vec.begin()); // заполнение контейнира методом обратного копирования из контейнера array

	for_each(vec.begin(), vec.end(), [](auto item) {cout << item << " "; }); // вывод контейнера через метод for_each для проверки
	cout << endl;

	return 0;
}