#include<iostream>
#include<conio.h>
#define MAX 100
struct SV
{
	int MSSV;
	char hoten[100];
	float toan;
	float ly;
	float hoa;
};
void nhapfile(SV a[], int &n)
{
	FILE*f;
	fopen_s(&f, "dssv.txt", "w+");
	for (int i = 0; i < n; i++) {
		fprintf(f, "%d\t%s\t%f\t%f\t%f\n", a[i].MSSV, a[i].hoten, a[i].toan, a[i].ly, a[i].hoa);
	}
	printf("Da save file");
	fclose(f);
}
void nhapmang(SV a[], int &n)
{	
		printf("nhap n:");
		scanf_s("%d", &n);

    for (int i = 0; i<n; i++)
	{
		printf("nhap MSSV:"); scanf_s("%d", &a[i].MSSV);
		printf("nhap hoten:"); fseek(stdin, 0, SEEK_END); gets_s(a[i].hoten);
		printf("nhap diem toan:"); scanf_s("%f", &a[i].toan);
		printf("nhap diem ly:"); scanf_s("%f", &a[i].ly);
		printf("nhap diem hoa:"); scanf_s("%f", &a[i].hoa);
    }
	
}
void xuatmang(SV a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("mssv: %d\n", a[i].MSSV);
		printf("hoten: %s\n", a[i].hoten);
		printf("diem toan : %f\n", a[i].toan);
		printf(" diem ly: %f\n", a[i].ly);
		printf(" diem hoa: %f\n", a[i].hoa);
	}
}
void diemtb(SV a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" diem tb cua sv %s la:", a[i].hoten);
		float tb = (a[i].toan + a[i].ly + a[i].hoa) / 3;
		printf("%f\n", tb);
	}
}
void tbmax(SV a[], int n)
{
	float max = (a[0].toan + a[0].ly + a[0].hoa) / 3;
	for (int i = 0; i < n; i++)
		if (((a[i].toan + a[i].ly + a[i].hoa) / 3) > max)
			max = ((a[i].toan + a[i].ly + a[i].hoa) / 3);
	printf("diem tb max %f\n", max);
}
void svdau(SV a[], int n)
{
	printf("danh sach sv dau la:\n");
	for (int i = 0; i < n; i++)
	{
		if (a[i].toan > 0 && a[i].hoa > 0 && a[i].ly > 0 && ((a[i].toan + a[i].ly + a[i].hoa) / 3) >= 5)
			printf(" %s\n", a[i].hoten);

	}
}
void svrot(SV a[], int n)
{
	printf("danh sach sv rot la:\n");
	for (int i = 0; i < n; i++)
	{
		if (a[i].toan == 0 || a[i].hoa == 0 || a[i].ly == 0 && ((a[i].toan + a[i].ly + a[i].hoa) / 3) < 5)
			printf(" %s\n", a[i].hoten);

	}
}
void main()
{
	SV a[MAX];
	int n;
	nhapmang(a, n);
	xuatmang(a, n);
	diemtb(a, n);
	tbmax(a, n);
	svdau(a, n);
	svrot(a, n);
	nhapfile(a, n);
	_getch();
}