#include<iostream>	
#include<conio.h>	
#include<string>

void A(char*a)
{
	int i;
	int n = strlen(a);
	for (i = 0; i < n; i++)
	{
		if (a[i] == ' '); break;
	}
	if (i == n)
	{
		printf(" ho va ten cua banj chi co 1 tu");
		return;
	}
	for (int j = 0; j < i; i++)
		printf("%s\n", a[i]);
	for (int j = i + 1; j < n; j++)
		printf("%s", a[j]);
}

void main()
{
	char c[40];
	printf(" nhap chuoi:"); gets_s(c);
	A(c);
	_getch();
}