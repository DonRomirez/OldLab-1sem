#include "menu1.h"
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h> 
#include <malloc.h>
#include <stdlib.h> 

void rand1(int* a, int n)
	{
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 201 - 100;
		}
	}
void arifm(int* a, int n) {
	int a1, d;
	printf("������� ������ ���� ������������������: ");
	scanf("%d", &a1);
	printf("\n ������� ����� d(��� ����������): ");
	scanf("%d", &d);
	a[0] = a1;
	for (int i = 1; i < n; i++)
	{
		a[i] = a[i - 1] + d;
	}
	printf("\n");


}
void hand(int* a, int n) {
	int h;
	for (int i = 0; i < n; i++)
	{
		printf("\n������� ������� �������: ");
		scanf("%d", &h);
		a[i] = h;
	}

}
void Start(int op) {
	int SR1;
	int n, i;
	int* a; 
	int* a1;
	printf("\n");
	setlocale(LC_ALL, "Rus");
	printf("���� ������.\n");
	printf("������� ������ �������: ");
	scanf("%d", &n);
	system("cls");
	a = (int*)malloc(sizeof(int) * n);
	a1 = (int*)malloc(sizeof(int) * n);

	printf("�������� ������ �������� �������:\n");
	printf("1. ��������� ����\n");
	printf("2. �������������� ����������\n");
	if (n <= 10) {
		printf("3. ������ ����\n");
	}
	scanf("%d", &op);
	switch (op)
	{
	case 1:
		rand1(a, n);
		break;
	case 2:
		arifm(a, n);
		break;
		if (n <= 10) {
	case 3:
		hand(a, n);
		break;
		}

	default:
		printf("eror!");
		exit(0);
	}
	system("cls");
	for (i = 0; i < n; i++) {
		a1[i] = a[i];
	}
	op = -1;
	printf("������� ������ �� �����?\n");
	printf("1. ��\n");
	printf("2. ���\n");
	scanf("%d", &op);
	system("cls");
	switch (op)
	{
	case 1:
		for (int i = 0; i < n; i++)
		{
			printf("%d, ", a[i]);
		}
		break;
	case 2:
		break;

	default:
		printf("eror!");
		exit(0);
	}
	printf("\n");
	printf("�������� ��� ����������\n");
	printf("1.�������(���������� �����)\n");
	printf("2.���������\n");
	printf("3.�������\n");
	printf("4.���������\n");
	printf("5.���������\n");
	op = -1;
	scanf("%d", &op);
	system("cls");
	clock_t start = clock();
		switch (op)
		{
		case 1:
			SR1 = 0;
			xoar1(a, 0, n - 1, SR1);
			printf("����� ���������:%d \n", SR1);
			break;
		case 2:
			count(a, n);
			break;
		case 3:
			V(a, n);
			break;
		case 4:
			Vs(a, n);
			break;
		case 5:
			p(a,n);
			break;

		default:
			printf("eror!");
			exit(0);
		}
		clock_t end = clock();
		double seconds = (double)(end - start) / CLOCKS_PER_SEC;
		printf("����� ������ ���������: %f ������\n", seconds);
		printf("����� ������� ����������� � ��������������� ������ ������� 2\n");
		op = -1;
		scanf("%d", &op);
		system("cls");
		switch (op) {
		case 2:
			printf("����������� ������: ");
			for (int i = 0; i < n; i++)
			{
				printf("%d, ", a1[i]);
			}
			printf("\n��������������� ������: ");
			for (int i = 0; i < n; i++)
			{
				printf("%d, ", a[i]);
			}
			break;
		}
			op = -1;
			printf("\n\n����� ���������� ������� 1 ��� ������� 0 ����� �����. \n");
			scanf("%d", &op);
			switch (op)
			{
			case 1:
				break;
			case 0:
				exit(0);
			}
			system("cls");
			free(a);
			free(a1);
}