// GT7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <queue>
#include <iostream>



int main()
{
	std::queue<int> chet;
	std::queue<int> nechet;
	for(int i = 2;i<=10;i=i+2)
	{
		chet.push(i);
		nechet.push(i - 1);
	}
	std::cout << "chet "<<"nechet\n";
	std::cout << chet.back() << "   " << nechet.back()<<'\n';
	std::cout << chet.front() << "    " << nechet.front();
	std::getchar();
	std::getchar();
	return 0;
}

