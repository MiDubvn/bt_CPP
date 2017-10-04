#include<iostream>	
#include<conio.h>	
#include<string>
using namespace std;

void strsplit(char **&arr, int &n)
{
	arr = new char *[100];
	n = 0;
	do
	{
		*(arr + n) = new char[40];
		cin >> *(arr +n);
		n++;
	} while (cin.get() != '\n');
}

void A()
{
	
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	cout << *(arr + 0) << endl;
	for (int j = 1; j < i - 1; j++)
	{
		cout << *(arr + j) << " ";
	}
	cout << *(arr + (i - 1)) << endl;
	}

void B()
{
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	cout << *(arr +(i-1)) << endl;
	
for (int j = 0; j < i - 1; j++)
	{
		cout << *(arr + j) << " ";
	}
}
void C()
{
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	cout << *(arr + 0) << endl;
	for (int j = 1; j < i - 1; j++)
	{
		cout << *(arr + j) << endl;
	}
	cout << *(arr + (i - 1)) << endl;
}
void D()
{
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	for (int j = i-1; j > 0; j--)
	{
		cout << *(arr + j) ;
	}
	cout << *(arr + 0) ;
}
void bai1()
{
	char str[100];
	gets_s(str);
	int len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
		cout << str[i];
}
void main()
{
	char c[40];
	printf(" nhap chuoi:");
	D();
	_getch();
}