#pragma once
#define SIZE 5
#include <iostream>

using namespace std;

class Array
{
private:
	int* array;
	static int count;
public:
	Array() : Array(nullptr) {};
	Array(int* array_S) : array{ new int[SIZE] }
	{
		count++;
		if (array_S)
		{
			for (int i{ 0 }; i < SIZE; i++)
			{
				array[i] = array_S[i];
			}
		}
	}
	Array(Array&& array_S) : array{ array_S.array }
	{
		array_S.array = nullptr;
		count++;
	}

	const int* get_string()
	{
		return array;
	}
	void set_string(const int* array_S)
	{
		if (array)
		{
			delete[] array;
		}
		array = new int[SIZE];
		for (int i{ 0 }; i < SIZE; i++)
		{
			array[i] = array_S[i];
		}
	}


	Array* sin_str(int& size);
	void print(int& size);
	static int get_count()
	{
		return count;
	}

	~Array()
	{
		count--;
	}
};