#define  _CRT_SECURE_NO_WARNINGS 1
#include"day2.h"
void geshu() 
{
	char b[100];
	int i = 0;
	int x = 0;
	char a=' ';
	while (a != '\n')
	{
		a = getchar();
		b[i] = a;
		i++;
	}
	b[i] = '\0';
	for (int j = 0; j < i; j++)
	{
		if (b[j] != ' ' && b[j + 1] == ' ')
			x++;
		if (b[j]!='\n' && b[j] != ' ' && b[j + 1] == '\0')
			x++;

	}
		printf("%d\n",x);
}