#include "menu1.h"
#include <stdio.h>
void p(int* a, int n) {
	bool f = true;
	int i = 0, j, t, SR = 0;
	while (f) {
		f = false;
		for (j = 0; j < n - 1 - i; j++) {
			SR++;
			if (a[j] > a[j + 1]) {
				swap(a, j, j + 1);
				f = true;
			}
		}
		i++;
	}
	printf("Число сравнений:%d \n", SR);
}