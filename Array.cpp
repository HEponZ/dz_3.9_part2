#include "Array.h"

void Array::print(int& size)
{
	for (int i{ 0 }; i < size; i++)
	{
		for (int j{ 0 }; j < SIZE; j++)
		{
			cout << this[i].array[j] << " ";
		}
		cout << "\n";
	}
}

Array* Array::sin_str(int& size)
{
	Array* new_str_mas = new Array[++size];

	cin.ignore();
	cout << "¬ведите новый массив:\n";
	for (int i{ 0 }; i < SIZE; i++)
	{
		cin >> new_str_mas[size-1].array[i];
	}
	cout << "¬вод завершен\n";

	for (int i = 0; i < size - 1; i++)
	{
		for (int j{ 0 }; j < SIZE; j++)
		{
			new_str_mas[i].array[j] = this[i].array[j];
		}
	}

	delete[] this;

	return new_str_mas;
}

int Array::count{ 0 };