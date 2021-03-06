//radix_sort
//shipunov
//17IVT3

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <chrono>
//RADIX_sort
void RaS(std::vector<int>& vec) {
	int r = 10;
	bool m = false;
	int tmp = 0, tt = 1;

	while (!m) {
		m = true;
		std::vector<int> ch[10];
		//take the digit of the number
		for (unsigned int i = 0; i < vec.size(); i++) {
			tmp = vec[i] / tt;

			ch[tmp%r].push_back(vec[i]);

			if ((m) && (tmp > 0)) { m = false; }

		}

		int a = 0;
		for (int b = 0; b < r; b++) {
			std::vector<int> buck = ch[b];
			for (int i = 0; i < buck.size(); i++) {
				vec[a] = buck[i];
				a += 1;
			}

		}
		tt *= r;
	}
	
}
//!!!!!!!!!!!!!!!!!!!!
//_______MAIN_________
//!!!!!!!!!!!!!!!!!!!!
int main()
{
	std::vector<int> arr;
	for (int y = 0; y < 10000; y++) {
		arr.push_back(rand() );
	}
	auto start = std::chrono::high_resolution_clock::now();
	RaS(arr);
	auto finish = std::chrono::high_resolution_clock::now();
	std::cout << "Sorted array is:\n";

	std::chrono::duration<double> elapsed = finish - start;
	std::cout << elapsed.count() << "\n";

	

	//for (int i = 0; i < arr.size(); i++) {
	//	std::cout << arr[i] << std::endl;
	//}
	std::getchar();
	std::getchar();
	return 0;
}


