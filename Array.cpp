#include "Array.h"

void Array::print(Array* str_mas, int& size)
{
	for (int i{ 0 }; i < size; i++)
	{
		for (int j{ 0 }; j < SIZE; j++)
		{
			cout << str_mas[i].array[j] << " ";
		}
		cout << "\n";
	}
}

Array* Array::sin_str(Array* str_mas, int& size)
{
	Array* new_str_mas = new Array[++size];
	int buffer[100];

	cin.ignore();
	cout << "¬ведите новый массив: ";
	//cin >> buffer;
	//strcpy_s(new_str_mas[size - 1].array, strlen(buffer) + 1, buffer);
	for (int i{ 0 }; i < size; i++)
	{
		for (int j{ 0 }; j < SIZE; j++)
		{
			cin >> new_str_mas[i].array[j];
		}
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j{ 0 }; j < SIZE; j++)
		{
			new_str_mas[i].array[j] = str_mas[i].array[j];
		}
	}

	delete[] str_mas;

	return new_str_mas;
}

int Array::count{ 0 };