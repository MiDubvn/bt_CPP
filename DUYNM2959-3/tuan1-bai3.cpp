#include <iostream>
#include <conio.h>
#include <math.h>
typedef struct diem
{
	int x;
	int y;
};
void nhapdiem(diem &d)
{
	printf("nhap hoanh do:"); scanf_s("%d", &d.x);
	printf("nhap tung do:"); scanf_s("%d", &d.y);
	fflush(stdin);
}
void nhapMangN(diem list[], int &n)
{
	do {
		printf("nhap n:");
		scanf_s("%d", &n);
	} while (n < 1 || n>100);
	
	for(int i =0;i<n; i++)
		nhapdiem(list[i]);
}
void demsoduong(diem list[], int &n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (list[i].x > 0)
			dem++;
	}
	printf("so diem co hoanh do duong la: %d\n", dem);
}
void socohdlonnhat(diem list[], int &n)
{
	int max = n;
	for (int i = 0; i < n; i++)
		if (list[max].x < list[i].x )
			max = list[i].x;
	printf("diem co hoanh do lon nhat la: %d\n", max);
}
void socohdnhonhat(diem list[], int &n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
		if (list[i].x < list[min].x)
			min = list[i].x;
	printf("diem co hoanh do nho nhat la: %d\n", min);
}
double kcdentam (diem p)
{
	return sqrt(p.x*p.x + p.y*p.y);
}
void timdiemgangoctoado(diem list[], int n)
{
	int min = 0;
		for (int i = 1; i < n; i++)
			if (kcdentam(list[i]) < kcdentam(list[min]))
				min = kcdentam(list[i]);
		printf(" diem gan tam nhat la: A%d - khoang cach la: %.1f\n", min, kcdentam(list[min]));
}
void main()
{
	int n;
	diem list[100];
	nhapMangN( list, n);
	demsoduong(list, n);
	socohdlonnhat(list, n);
	socohdnhonhat(list, n);
	timdiemgangoctoado(list, n);
	_getch();
}