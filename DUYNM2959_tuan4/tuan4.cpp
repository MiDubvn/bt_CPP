#include<iostream>	
#include<conio.h>	
#include<string>
using namespace std;

void A()
{
	char **arr = new char *[100];
	int i = 0;
	do
	{
		*(arr + i) = new char[40];
		cin >> *(arr + i);
		i++;
	} while (cin.get() !='\n') ;
	
	cout << *(arr + 0) << endl;
	for (int j = 1; j < i - 1; j++)
	{
		cout << *(arr + j) << " ";
	}
	cout << *(arr + (i - 1)) << endl;
	}

void b()
{
	char **arr = new char *[100];
	int i = 0;
	do
	{
		*(arr + i) = new char[40];
		cin >> *(arr + i);
		i++;
	} while (cin.get() != '\n');

	cout << *(arr + 0) << endl;
	for (int j = 1; j < i - 1; j++)
	{
		cout << *(arr + j) << " ";
	}
	cout << *(arr + (i - 1)) << endl;
}
void main()
{
	char c[40];
	printf(" nhap chuoi:");
	A();
	_getch();
}