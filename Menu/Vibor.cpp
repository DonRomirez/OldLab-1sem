#include "menu1.h"
#include <stdio.h>
void V(int* a, int n) {
	int i, j, i_min, SR=0;
	for (i = 0; i < n - 1; i++)
	{
		i_min = i;
		for (int j = i + 1; j < n; j++) {
			SR++;
		if (a[i_min] > a[j])
		{
			i_min = j;
		}
	}
		swap(a, i_min, i);
	}
	printf("Число сравнений:%d \n", SR);
}