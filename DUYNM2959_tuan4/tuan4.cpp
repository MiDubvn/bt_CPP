#include<iostream>	
#include<conio.h>	
#include<string>
using namespace std;

struct KyTu
{
	char kytu;
	int dem;
};
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
		cout << *(arr + j)<<" " ;
	}
	cout << *(arr + 0) ;
}
void E()
{
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	cout << *(arr + i-1);
}
void F()
{
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	for (int j = 0; j < i; j++)
		if (arr[j][0]<'A' || arr[j][0]>'Z')
			arr[j][0] -= 32;
	cout << *(arr + 0)  << " ";
	for (int j = 1; j < i - 1; j++)
	{
		cout << *(arr + j) << " ";
	}
	cout << *(arr + (i - 1)) << endl;
	
}
void bai1()
{
	char str[100];
	gets_s(str);
	int len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
		cout << str[i];
}
void bai2()
{
	char str[100];
	gets_s(str);
	int len = strlen(str);
	KyTu *list = new KyTu[len];
	int dodai = 0;
	for (int i = 0; i < len; i++)
	{
		bool isNew = true;
		for (int j = 0; j < dodai; j++)
		{
			if (list[j].kytu == str[i])
			{
				isNew = false;
				list[j].dem++;
			}
		}
		if (isNew)
		{
			list[dodai].kytu = str[i];
			list[dodai].dem = 1;
			dodai++;
		}
	}
	for (int i = 0; i < dodai; i++)
	{
		cout << list[i].kytu << ": " << list[i].dem << endl;
	}
		
}
void bai3()
{
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	for (int j = 0; j < i; j++)
		if (arr[j][0]<'a' || arr[j][0]>'z')
			arr[j][0] += 32;
	cout << *(arr + (i-1)) << ".";
	for (int j = 0; j < i - 1; j++)
	{
		cout << *(arr + j);
	}
	cout << "@hoasen.edu.vn" << endl;
}
void bai4()
{
	int q, w, e, r, t, y;
	printf("\n vui long nhap 1so roi an enter cho den khi het mssv\n");
	printf(" nhap mssv:");
	scanf_s("%d%d%d%d%d%d", &q, &w, &e, &r, &t, &y);
	char **arr = NULL;
	int i = 0;
	strsplit(arr, i);
	for (int j = 0; j < i; j++)
		if (arr[j][0]<'a' || arr[j][0]>'z')
			arr[j][0] += 32;
	cout << *(arr + (i - 1)) << ".";
	for (int j = 0; j < i - 1; j++)
	{
		cout << *(arr + j);
	}
	printf("%d%d%d%d@sinhvien.hoasen.edu.vn", e, r, t, y);
}
void main()
{
	char c[40];
	printf(" nhap chuoi:");
	bai4();
	_getch();
}