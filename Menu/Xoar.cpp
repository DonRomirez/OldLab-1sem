#include<stdio.h>
void xoar1(int* a, int first, int last, int& SR)
{
    int i = first, j = last;
    int d;
    int m = a[(first + last) / 2];
    while (i <= j)
    {
        for (i; a[i] < m; i++);
        for (j; a[j] > m; j--); {
            SR++;
            if (i <= j)
            {
                d = a[i];
                a[i++] = a[j];
                a[j--] = d;
            }
        }
    }
    SR++;
    if (first < j) { xoar1(a, first, j, SR); }
    SR++;
    if (i < last) { xoar1(a, i, last, SR); }

}