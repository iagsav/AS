

#include "stdafx.h"
#include <iostream>
#include <array>

int main()
{
	//Создание массива с помощью array

	int i;
	std::array < int, 10 > arr1;
	for (i = 0; i <= 10; i++) {
		arr1[i] = i;
	}
	for (i = 0; i <= 10; i++) {
		std::cout << arr1[i];
		std::cout << std::endl;
	}


	//Coздание массива с помощью оператора new

	int j;
	int n;
	std::cin >> n;
	int *arr2 = new int(n);
	for (j = 0; j <n; j++) {
		arr2[j] = j + 1; //*arr2=j; arr2++;

	}
	arr2 = arr2 - n;
	for (j = 0; j < n; j++) {
		std::cout << *arr2;
		arr2++;
	}

	//Coздание фиксированного массива
	int k;
	int arr3[10];
	for (k = 0; k <= 10; k++) {
		arr3[i] = i + 2;
	}
	for (k = 0; k <= 10; k++) {
		std::cout << arr3[i];
		std::cout << std::endl;
	}

	system "pause";
	return 0;
}