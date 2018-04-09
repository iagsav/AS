// UPR4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

void samale(std::vector<int>& arr, int n);
using namespace std;

int main()
{
	std::vector<int> okyan { 1, 2, 3, 1, 4, 1, 5, 7, 3, 4, 1 };
	int n = okyan.size();
	for (int i = 0; i < n; i++) { cout << okyan[i] << " "; }
	cout << "\n";
	samale(okyan, n);
	for (int i = 0; i < n; i++) { cout << okyan[i] << " "; }
	system("pause");
    return 0;
}

void samale(std::vector<int>& arr, int n) {
	std::vector<int>::iterator max;
	max = std::max_element(arr.begin(), arr.end());
	const int maxV = max - arr.begin()+1;
	cout << maxV;
	std::vector<int> count;
	int chislo;
	for (int i = 0; i < n; i++) {
		chislo = arr[i];
		count[chislo]++;  cout << "1";
	}
	int k = 0;
	for (int i = 0; i < maxV; i++) {
		for (int j = 0; j < count[i]; j++,k++) { 
			arr[k] = i;
		}
	}
}

