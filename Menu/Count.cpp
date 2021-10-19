#include<math.h>
#include<stdio.h>
#include<malloc.h>
void count(int* a, int n) {
	int* A;
    int size = 201;
	int max = a[0], min = a[0], zero =100, i=0, j = 0, SR = 0;
	// поиск максимума и минимума
	for (i = 0; i < n; i++)
	{
		SR++;
		if(max<a[i])
		{
			max = a[i];
		}
	}
	for (i = 0; i < n; i++) {
		SR++;
		if (min > a[i]) {
			min = a[i];
		}

	}
	//поиск размера занулённого массива и номера отведенного для нуля
	if (min < 0) {
		size = max - min + 1;
		zero = -min;
	}
	else {
		size = max + min;
		zero = 0;
	}
	//алгоритм сортировки
	A = (int*)malloc(sizeof(int) * size);
	for (i = 0; i < size; i++) {
		A[i] = 0;
	}


	for (i = 0; i < n; i++) {
		A[zero + a[i]]++;
	}
	for (i = 0; i < size; i++) {
		while (A[i] > 0) {
			a[j] = i - zero;
			A[i]--;
			j++;
		}
	}
	free(A);
	printf("Число сравнений:%d \n", SR);
}
