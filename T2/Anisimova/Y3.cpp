// 2С++_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include <array>

int main()
{
	std::array <int, 10> mas1;
	for (std::size_t i = 0; i < 10; i++) {
		std::cin >> mas1[i];
	}
	for (auto y:mas1) {
		std::cout << y*2 << " ";
		y = y*2;
	}
	system("pause");
	return 0;
}

