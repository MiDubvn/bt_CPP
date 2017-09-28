#include<iostream>
#include<conio.h>
#define MAX 1000
struct SV
{
	int MSSV;
	char hoten[100];
	float toan;
	float ly;
	float hoa;
};
void ghiFile(SV *a, int &n)
{
	FILE*f;
	fopen_s(&f, "dssv.dat", "wb");
	fwrite(a, sizeof(SV), n, f);
	printf("Da save file");
	fclose(f);
}
void docTuFile(SV *a, int &n) {
	FILE *f;
	n = 0;
	fopen_s(&f, "dssv.dat", "rb");
	if (f != NULL) {
		while (!feof(f))
			if (fread(a + n, sizeof(SV), 1, f))
				n++;
		fclose(f);
		printf("Da doc file");
	}
	else {
		printf("Khong the doc file");
	}
}
void nhapmang(SV *a, int &n)
{	
	delete a;
	printf("Nhap n:\n");
	scanf_s("%d", &n);
	a = new SV[n];

    for (int i = 0; i<n; i++)
	{
		printf("nhap MSSV:"); scanf_s("%d", &(a+i)->MSSV);
		printf("nhap hoten:"); fseek(stdin, 0, SEEK_END); gets_s((a+i)->hoten);
		printf("nhap diem toan:"); scanf_s("%f", &a[i].toan);
		printf("nhap diem ly:"); scanf_s("%f", &a[i].ly);
		printf("nhap diem hoa:"); scanf_s("%f", &a[i].hoa);
    }
	
}
void xuatmang(SV *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("mssv: %d\n", (a+i)->MSSV);
		printf("hoten: %s\n", a[i].hoten);
		printf("diem toan : %f\n", a[i].toan);
		printf(" diem ly: %f\n", a[i].ly);
		printf(" diem hoa: %f\n", a[i].hoa);
	}
}
void diemtb(SV *a, int n)
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
int lonNhat(int a, int b) {
	if (a > b)
		return a;
	return b;
}
int beNhat(int a, int b) {
	if (a < b)
		return a;
	return b;
}
int TimGiaTri(int a[], int l, int(*SoSanh)(int, int)) {
	int giaTri = a[0];
	for (int i = 1; i < l; i++) {
		giaTri = (*SoSanh)(giaTri, a[i]);
	}
	return giaTri;
}
void main()
{

	int a[] = { -4,7,10,20 };
	printf("Gia tri lon nhat la %d\n", TimGiaTri(a, 4, lonNhat));
	printf("Gia tri be nhat la %d", TimGiaTri(a, 4, beNhat));

	int n = 0;
	SV *dsSV = new SV[n];

	//void nhapmang(SV *a, int &n)
	nhapmang(dsSV, n);
	xuatmang(dsSV, n);
	diemtb(dsSV, n);
	tbmax(dsSV, n);
	svdau(dsSV, n);
	svrot(dsSV, n);
	ghiFile(dsSV, n);
	_getch();
}