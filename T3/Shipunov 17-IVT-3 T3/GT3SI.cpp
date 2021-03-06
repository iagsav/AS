// GT3SI.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <array>
#include <chrono>
#include <windows.h>
#include <string>

void ISort(std::array<char, 10000>& arr)
{
	int key, j;
	int per = 10000 / 100;
	std::string s = "|";
	int count = 0;
	for (int i = 1; i < 10000; i++) {
		key = arr[i];
		j = i - 1;
		if (i % per == 0) {
			system("cls");count++;
			std::cout << count << "% " << s << "\n";
			s = s + '|';
			
		}
		
		while ((j >= 0) && (key < arr[j])) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
	system("cls"); count++;
	std::cout << count << "% " << s << "\n";
	
}

int main()
{
	const int N = 10000;
	std::array<char, N> arr;
	for (int i = 0; i < N; i++) arr[i] = rand();
	auto start = std::chrono::high_resolution_clock::now();
	ISort(arr);
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Sorted array is:\n";
	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";
	std::getchar();
	std::getchar();
	return 0;
	
}


