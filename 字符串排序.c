#define  _CRT_SECURE_NO_WARNINGS 1
#include"day2.h"
#include<string.h>
void jiaohuan(char a[], char b[]) 
{
	char f[100];
	int x = strcmp(a, b);
	if (x > 0)
	{
		for (int i = 0; i < 100; i++)
		{
			f[i] = b[i];
			b[i] = a[i];
			a[i] = f[i];
		}
	}
}
void paixu() 
{
	char a[5][100];
	for (int i = 0; i < 5; i++) 
	{
		scanf("%s", &a[i]);
	}
	for (int i = 0; i < 4; i++) 
	{
		for (int j = i+1; j < 5; j++) 
		{
			jiaohuan(a[i], a[j]);
		}
	}
	printf("After sorted:\n");
	for (int i = 0; i < 5; i++) 
	{
		printf("%s", a[i]);
		if (i < 4)
			printf("\n");
	}
}