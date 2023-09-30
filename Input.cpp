#include <iostream>
#include <Windows.h>

using namespace std;

struct Lessons {
	int First;
	int Second;
	int Third;
};

void show(const Lessons obj[], int n);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int Five = 0;
	int Three = 0;
	int Two_F = 0, Two_S = 0, Two_T = 0;
	const int n = 18;
	Lessons Arr[n] = {};
	for (int i = 0; i < n; i++) {
		cout << i+1 << " Ученик." << endl;
		cout << "Оценка по первому предмету: ";
		cin >> Arr[i].First;
		if (Arr[i].First == 5)
			Five = Five++;
		if (Arr[i].First == 3)
			Three = Three++;
		if (Arr[i].First == 2)
			Two_F = Two_F++;
		cout << "Оценка по второму предмету: ";
		cin >> Arr[i].Second;
		if (Arr[i].Second == 5)
			Five = Five++;
		if (Arr[i].Second == 3)
			Three = Three++;
		if (Arr[i].Second == 2)
			Two_S = Two_S++;
		cout << "Оценка по третьему предмету: ";
		cin >> Arr[i].Third;
		if (Arr[i].Third == 5)
			Five = Five++;
		if (Arr[i].Third == 3)
			Three = Three++;
			cout << "Количество троек у " << i + 1 << " ученика: " << Three << endl;
			Three = 0;
		if (Arr[i].Third == 2)
			Two_T = Two_T++;
	}
	show(Arr, n);
	cout << "Количество пятёрок в таблице: " << Five << endl;
	cout << "Количество двоек по первому предмету: " << Two_F << endl;
	cout << "Количество двоек по второму предмету: " << Two_S << endl;
	cout << "Количество двоек по третьему предмету: " << Two_T << endl;
	system("pause");
	return 0;
}

void show(const Lessons obj[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " Ученик." << endl;
		cout << "Оценка по первому предмету: " << obj[i].First << "\tОценка по второму предмету: " << obj[i].Second << "\tОценка по третьему предмету: " << obj[i].Third << endl;
	}
}