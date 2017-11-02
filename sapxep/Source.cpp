#include <iostream>
#include <conio.h>
#include <time.h>
#include "InterchangeSort.h"
using namespace std;
void nhapmang(int *a, int &n)
{
	
	int x, y;
	cout << "cac phan tu trong mang co gia tri tu:";
	cin >> x;
	do
	{
		cout << "den";
		cin >> y;
	} while (y <= x);
	srand(time(0));
	for (int i = 0; i < n; i++)
		a[i] = x + rand() % (y - x + 1);
}
void xuatmang(int *a, int &n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	cout << endl;
}
void main()
{
	int n;
	cout << "vui long nhap vao so luong phan tu can su dung:";
	cin >> n;
	int *a = new int[n];
	nhapmang(a, n);
	xuatmang(a, n);
    /*interchangeSort(a, n, giamdan);
	xuatmang(a, n);*/
	/*BubbleSort(a, n, tangdan);
	xuatmang(a, n);*/
	/*SelectSort(a, n, giamdan);
	xuatmang(a, n);*/
	InsertSort(a, n, tangdan);
	xuatmang(a, n);
	_getch();
	
}