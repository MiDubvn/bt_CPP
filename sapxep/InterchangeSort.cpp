#include <iostream>

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