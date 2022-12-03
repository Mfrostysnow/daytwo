#define  _CRT_SECURE_NO_WARNINGS 1
#include"day2.h"
void jishu() 
{
	int i = 0,x,y,flag=0;
	char a = 0;
	char b[1000], c[1000];
	while (a != '\n') 
	{
		a = getchar();
		b[i] = a;
		c[i] = a;
		i++;
	}
	c[i - 1] = '\0';
	for (int j = 0; j < i; j++) 
	{
		if (b[j] == '.')
		{
			x = j;
			flag = 1;
		}
		if (b[j] == '*')
			y = j;
	}
	if(flag==1)
	{
		for (int j = x; j < y; j++)
		{
			if (j == y - 1)
				b[y - 1] == ' ';
			else
				b[j] = b[j + 1];
		}
	}

}