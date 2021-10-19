#include<stdio.h>
void Vs(int* a, int n) {
	int i, j, t, SR= 0;
	for (i = 1; i < n; i++)
	{
		t = a[i];
		for (j = i; j > 0; j--) {
			SR++;
			if (a[j - 1] > t)
				a[j] = a[j - 1];
			else
				break;
		}
			a[j] = t;
		
	}
	printf("Число сравнений:%d \n", SR);
}