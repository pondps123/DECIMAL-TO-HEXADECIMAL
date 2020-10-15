#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void Hexadecimal(int Num)
{
	int num_hexa, i = 0, j = 0;
	int a[128], * b;
	if (Num > 0)
	{
		while (Num != 0)
		{
			num_hexa = Num % 16;
			a[i] = num_hexa;
			Num /= 16;
			i++;
		}
		b = a;
		i--;
		printf("Hexadecimal Number : ");
		for (i; i >= 0; i--)
		{
			if (*(b + i) < 10) {
				printf("%d", *(b + i));
			}
			else if (*(b + i) == 10) {
				printf("A");
			}
			else if (*(b + i) == 11) {
				printf("B");
			}
			else if (*(b + i) == 12) {
				printf("C");
			}
			else if (*(b + i) == 13) {
				printf("D");
			}
			else if (*(b + i) == 14) {
				printf("E");
			}
			else if (*(b + i) == 15) {
				printf("F");
			}
		}
	}
	else if (Num < 0)
	{
		int NewNum = abs(Num),n = NewNum,j=0;
		while (NewNum != 0)
		{
			num_hexa = NewNum % 16;
			a[i] = num_hexa;
			NewNum /= 16;
			i++;
			j++;
		}
		b = a;
		i--;
		j--;
		printf("Hexadecimal Number (%d) : ", n);
		for (i; i >= 0; i--)
		{
			if (*(b + i) < 10) {
				printf("%d", *(b + i));
				*(b + i) = abs(*(b + i) - 15);
			}
			else if (*(b + i) == 10) {
				printf("A");
				*(b + i) = abs(*(b + i) - 15);
			}
			else if (*(b + i) == 11) {
				printf("B");
				*(b + i) = abs(*(b + i) - 15);
			}
			else if (*(b + i) == 12) {
				printf("C");
				*(b + i) = abs(*(b + i) - 15);
			}
			else if (*(b + i) == 13) {
				printf("D");
				*(b + i) = abs(*(b + i) - 15);
			}
			else if (*(b + i) == 14) {
				printf("E");
				*(b + i) = abs(*(b + i) - 15);
			}
			else if (*(b + i) == 15) {
				printf("F");
				*(b + i) = abs(*(b + i) - 15);
			}
		}
		printf("\n1's complement = ");
		i = j;
		for (i; i >= 0; i--)
		{
			if (*(b + i) < 10) {
				printf("%d", *(b + i));
			}
			else if (*(b + i) == 10) {
				printf("A");
			}
			else if (*(b + i) == 11) {
				printf("B");
			}
			else if (*(b + i) == 12) {
				printf("C");
			}
			else if (*(b + i) == 13) {
				printf("D");
			}
			else if (*(b + i) == 14) {
				printf("E");
			}
			else if (*(b + i) == 15) {
				printf("F");
			}
		}
		*b += 1;
		for (int k = 0; k <= j; k++)
		{
			if (*(b + k) == 16)
			{
				*(b + k) = 0;
				*(b + k + 1) += 1;
			}
		}
		printf("\n2's complement = ");
		for (j; j >= 0; j--)
		{
			if (*(b + j) < 10) {
				printf("%d", *(b + j));
			}
			else if (*(b + j) == 10) {
				printf("A");
			}
			else if (*(b + j) == 11) {
				printf("B");
			}
			else if (*(b + j) == 12) {
				printf("C");
			}
			else if (*(b + j) == 13) {
				printf("D");
			}
			else if (*(b + j) == 14) {
				printf("E");
			}
			else if (*(b + j) == 15) {
				printf("F");
			}
		}
	}
	else if (Num == 0)
	{
		printf("Hexadecimal Number : 0");
	}
}
int main()
{
	int a;
	printf("Enter Decimal Number : ");
	scanf("%d", &a);
	Hexadecimal(a);
	return 0;
}