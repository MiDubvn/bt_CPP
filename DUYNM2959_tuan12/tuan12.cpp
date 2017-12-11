#include "stdio.h"
#include "conio.h"

typedef struct SV
{
	int mssv;
	char hoten[50];
};

typedef struct SV DATA;

#include "Queue.h"

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

void Input(Queue &q, SV &sv)
{
	int n, i = 0;
	printf("So SV can them: ");
	scanf_s("%d", &n);
	do
	{
		Nhap1SV(sv);
		insertTail(q, sv);
		i++;
	} while (i<n);
}

void Output(Queue q)
{
	printf("MSSV \t Ho ten\n");
	for (NODE *p = q.pHead; p != NULL; p = p->pNext)
		Xuat1SV(p->info);
}

void main()
{
	Queue q;
	DATA sv;
	Initialize(q);
	Input(q, sv);
	Output(q);
	Nhap1SV(sv);
	Push(q, sv);
	Output(q);
	Pop(q);
	Output(q);
	_getch();
}
