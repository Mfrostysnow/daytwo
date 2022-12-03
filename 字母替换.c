#define  _CRT_SECURE_NO_WARNINGS 1
#include"day2.h"
void jiemi() 
{
	int i = 0;
	char a = '0';
	char b[1000];
	while (a != '\n') 
	{
		a = getchar();
		b[i] = a;
		i++;
	}
	b[i-1] = '\0';
	for (int j = 0; j < i; j++) 
	{
		if (b[j] >= 65 && b[j] < 90)
			b[j] = b[j] + 33;
		else if (b[j] == 90)
			b[j] = 'a';
		else if (b[j] >= 97 && b[j] < 122)
			b[j] = b[j] - 31;
		else if (b[j] == 122)
			b[j] = 'A';
	}
	printf("%s\n", b);
}