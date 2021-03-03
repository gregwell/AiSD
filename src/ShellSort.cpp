#include <string>
#include <iostream>
#include <algorithm>
#pragma once
#include "ShellSort.hpp"

using namespace std;


int shellSort(int arr[], int n)
{
	int cmp=0;
	int counter=0;
	//startuje z gapem rownym n/2
	for (int gap = n / 2; gap >=1; gap /= 2)
	{
		//dla tego gapa wykonuje kilka sortowań
		for (int i = gap; i < n; i += 1)
		{
			int temp = arr[i];
			cmp++;
			//przepatrzyć poprzednie wartosci z gapa, zeby wstawic arr[i] prawidlowo
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				
				arr[j] = arr[j - gap];

				//  polozyc temp na prawidlowej lokacji
				arr[j] = temp;
				counter++;
			}

		}
	}
	return 0;
}