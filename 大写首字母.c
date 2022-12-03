#define  _CRT_SECURE_NO_WARNINGS 1
#include"day2.h"
#include<ctype.h>
#include<string.h>
void daxie() 
{
	int i=0;
	char a='0';
	char b[10000]={'0'};
	while (a != '\n') 
	{
		a = getchar();
		b[i] = a;
		i++;
	}
	int m = strlen(b);
	if (islower(b[0]) != 0) 
	{
		b[0] = b[0] - 32;
	}
	for (int j = 1; j <= m; j++) 
	{
		if (b[j-1] == ' '&&islower(b[j])!=0)
		{
			b[j] = b[j] - 32;
		}
	}
	printf("%s",b);
}