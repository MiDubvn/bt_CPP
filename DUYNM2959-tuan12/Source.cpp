#include "stdio.h"
#include "conio.h"

typedef struct SV
{
	int mssv;
	char hoten[50];
};

typedef struct SV DATA;

#include "Stack.h"

void Nhap1SV(SV &sv)
{
	printf("Nhap mssv: ");
	scanf_s("%d", &sv.mssv);
	fseek(stdin, 0, SEEK_END);
	printf("Nhap ho ten: ");
	gets_s(sv.hoten);
}

void Xuat1SV(SV sv)
{
	printf("%d \t %s\n", sv.mssv, sv.hoten);
}

void Input(List &l, SV &sv)
{
	int n, i = 0;
	printf("So SV can them: ");
	scanf_s("%d", &n);
	do
	{
		Nhap1SV(sv);
		AddTop(l, sv);
		i++;
	} while (i<n);
}

void Output(List l)
{
	printf("MSSV \t Ho ten\n");
	for (NODE *p = l.pHead; p != NULL; p = p->pNext)
		Xuat1SV(p->info);
}

void main()
{
	List l;
	DATA sv;
	Initialize(l);
	Input(l, sv);
	Output(l);
	printf("Push:\n");
	Nhap1SV(sv);
	Push(l, sv);
	Output(l);
	printf("Pop:\n");
	Pop(l);
	Output(l);
	_getch();
}