#include "stdafx.h"
#include<iostream>
#include<array>

int main() {
	std::array<int, 10> arr;
	int i = 0;
	std::cout << "massiv: ";
	for (auto &arr : arr) {
		arr = i;
		std::cout << arr << " ";
		i++;
		
	}
	return 0;
	
}