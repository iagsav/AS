
#include "stdafx.h"
#include <stdio.h>
#include <array>


using namespace std;

void f1(int arr[10]);
void f2(int *arr);
void f3(array<int, 10>& arr);


int main()
{
	int arr1[10];
	int *arr2 = new int[10];
	array<int, 10> arr3;
	srand(rand());
	for (size_t i = 0; i < 10; i++)
	{
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 100;
		arr3[i] = rand() % 1000;
	}

	f1(arr1);
	f2(arr2);
	f3(arr3);
}

void f1(int arr[10])
{
	printf("Statich mass:\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0) arr[i] *= 2;
		else arr[i]--;
		printf("mass[%zu]=%d\n", i, arr[i]);
	}
}

void f2(int *arr)
{
	printf("ARRAY new:\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0) arr[i] *= 2;
		else arr[i]--;
		printf("ARRAY[%zu]=%d\n", i, arr[i]);
	}
}

void f3(array<int, 10>& arr)
{
	printf("std::array :\n");
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (i % 2 == 0) arr[i] *= 2;
		else arr[i]--;
		printf("arr[%zu]=%d\n", i, arr[i]);
	}
}