#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct sinhvien
{
	int MSSV;
	char ten[50];

};
typedef struct sinhvien DATA;
#include "List.h"
void nhap1sv(sinhvien &sv)
{
	printf("nhap MSSV:");
		scanf_s("%d", &sv.MSSV);
		fflush(stdin);
		printf("nhap ten:");
		gets_s(sv.ten);
		fflush(stdin);
}
void xuat1sv(sinhvien sv)
{
	printf("MSSV:%d\n",sv.MSSV);
	printf("Ten:%s\n", sv.ten);
}
void input(List &l)
{
	DATA sv;
	int n, i = 0;
	printf("nhap vao so sinh vien muon them:");
	scanf_s("%d", &n);
	do
	{
		nhap1sv(sv);
		AddFrist(l, sv);
		i++;
	} while (i < n);
}
void output(List l)
{
for(NODE*p=l.pHead;p!=NULL;p=p->pNext)
{
	xuat1sv(p->info);
}
}
void main()
{
	DATA x;
	List l;
	Init(l);
	input(l);
	output(l);

	_getch();
}