#include <stdio.h>
#include < conio.h>
#include <string.h>
#define MAX 100
typedef struct sinhvien
{
	int MSSV;
	char ten[20];
	int khoa;
	char nghanh[20];
};
typedef struct list
{
	int n;
	sinhvien a[MAX];
};
void nhap1sv(sinhvien &sv)
{
	printf("nhap MSSV:");
	scanf_s("%d", &sv.MSSV);
	fflush(stdin);
	printf("nhap ten:"); 
	gets_s(sv.ten);
	fflush(stdin);
	printf("nhap khoa:");
	scanf_s("%d", &sv.khoa);
	fflush(stdin);
	printf("nhap nganh:");
	gets_s(sv.nghanh);
	fflush(stdin);

}
void nhapmangsv(sinhvien &sv, list &l)
{
	printf("nhap vao so sinh vien:");
	scanf_s("%d", &l.n);
	for (int i = 0; i < l.n; i++)
		nhap1sv(l.a[i]);
}
void xuat1sv(sinhvien sv)
{
	printf("%d\t%s\t%d\t%s\n", sv.MSSV, sv.ten, sv.khoa, sv.nghanh);
}
void xuatmangsv(sinhvien sv, list l)
{
	printf("MSSV\tTen\tkhoa\tnganh\n");
	for (int i = 0; i < l.n; i++)
		xuat1sv(l.a[i]);
}
void xoadau(sinhvien &sv, list &l)
{
	for (int i = 0; i < l.n; i++)
		l.a[i] = l.a[i + 1];
	l.n--;
}
void themdau(sinhvien &sv, list &l)
{
	for (int i = l.n - 1; i >= 0; i--)
		l.a[i + 1] = l.a[i];
	nhap1sv(l.a[0]);
	l.n++;
}
void themgiua(sinhvien &sv, list &l)
{
	int g;
	printf("nhap vao vi tri sinh vien muon them:");
	scanf_s("%d", &g);
	for (int i = l.n - 1; i >= g; i--)
		l.a[i + 1] = l.a[i];
	nhap1sv(l.a[g]);
	l.n++;
}
void xoagiua(sinhvien &sv, list &l)
{
	int g;
	printf("nhap vao vi tri muon xoa thong tin sinh vien:");
	scanf_s("%d", &g);
	for (int i = g - 1; i < l.n; i++)
		l.a[i] = l.a[i + 1];
	l.n--;
}
void themcuoi(sinhvien &sv, list &l)
{
	nhap1sv(l.a[l.n]);
	l.n++;
}
void sortbyname(sinhvien &sv ,list &l)
{
for (int i=0; i<l.n;i++)
	for (int j = 0; j < l.n; j++)
	{
		if (strcmp(l.a[j].ten, l.a[j + 1].ten) > 0)
		{
			sinhvien temp = l.a[j];
			l.a[j] = l.a[j + 1];
			l.a[j + 1] = temp;
		}
	}xuatmangsv(sv, l);
}
void main()
{
	sinhvien sv;
	list l;
	nhapmangsv(sv, l);
	xuatmangsv(sv, l);
	sortbyname(sv, l);
	_getch();
}