// GL2_1CPP.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>






int main()
{
	std::array<int, 10> arr = { 123,44,2,66,43,23,78,24,1,7 };
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i]%2==0)
		{
			arr[i] = arr[i] * 2;
		}
		else
		{
			arr[i]--;
		}
		std::cout << arr[i] << ' ';
	}
	getchar();
	getchar();
    return 0;
	
}

