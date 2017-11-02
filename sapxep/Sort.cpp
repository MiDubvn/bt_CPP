#include <iostream>
using namespace std;
typedef bool (*SortType)(int, int);
bool tangdan(int a, int b) 
{
	if (a < b)
		return true;
	return false;
}
bool giamdan(int a, int b)
{
	if (a < b)
		return false;
	return true;

}
void interchangeSort(int *a, int n, SortType func)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (func(a[j],a[i]))
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;

			}
		}
	}
}
void swap(int &a, int &b)
{
		int sm = a;
		a = b;
		b = sm;
	
}
void BubbleSort(int *a, int n, SortType func)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >i; j--)
		{
			if (func(a[j], a[j - 1]))
			{
				swap(a[j], a[j - 1]);
			}

		}
	}
}

void SelectSort(int *a, int n, SortType func)
{
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (func( a[min] , a[j]))
			{
				min = j;
			}
			swap(a[min], a[i]);
		}
	}
}

void InsertSort(int *a, int n, SortType func)
{
	int k, j;
	for (int i = 0; i < n - 1; i++)
	{
		j = i - 1;
		k = a[i];
		while (k < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;
	}
}
