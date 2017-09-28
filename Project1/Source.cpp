#include<stdio.h>
#include<conio.h>
#include <string.h>
#define MAX 100
typedef struct BT
{
	int maBT;
	char tenBT[10];
	char trangthai[15];
};

void nhapfile(BT a[], int &n)
{
	n = 0;
	FILE*f;
	fopen_s(&f, "baitaptuan.txt", "wt");
	fclose(f);
}
void nhapvao1bt(BT a[], int &n)
{
	printf(" maBT");
	scanf_s("%d", &a[n].maBT);
	printf(" tenBT");
	gets_s(a[n].tenBT);
	printf(" trangthai:");
	gets_s(a[n].trangthai);

}
void loadfile(BT a[], int &n)
{
	n = 0;
	FILE*f;
	fopen_s(&f, "baitaptuan.txt", "rt");
	if (f == NULL)
	{
		printf("ko load dc file");
		return;
	}
	while (!feof(f))
	{
		if (fscanf_s(f, "%d", &a[n].maBT) && fscanf_s(f, "%s", a[n].tenBT) && fgets(a[n].trangthai, 10, f))
			n++;
	}
	fclose(f);
}void xuatbt(BT z)
{
	printf("%d %s %s\n", z.maBT, z.tenBT, z.trangthai);
}
void xuatmang(BT a[], int n)
{
	for (int i = 0; i<n; i++)
		xuatbt(a[i]);
}
void lietkebaitapchualam(BT a[], int n)
{
	printf("bai tap chua lam\n");
	for (int i = 0; i<n; i++)
		if (strcmp(a[i].trangthai, " chua lam") == 0)
			xuatbt(a[i]);
}
int tinhdiem(BT a[], int n)
{
	int diem = 0;
	for (int i = 0; i<n; i++)
		if (strcmp(a[i].trangthai, " da lam") == 0)
			diem += 10;
		else if (strcmp(a[i].trangthai, " bi loi") == 0)
			diem += 5;
	return diem;
}
void main()
{
	BT a[MAX];
	int n;
	int chon = 1;
	bool exit = false;
	do
	{
		printf(" 0: Ket thuc chuong trinh\n");
		printf(" 1: Ghi bai tap vao FILE\n");
		printf(" 2: Doc File\n");
		printf(" 3:  Xuat mang ra man hinh\n");
		printf(" 4: liet ke bai tap chua nop\n");
		printf(" 5: tinh diem\n");
		printf(" 6: nhap vao 1 bt\n");
		printf(" vui long chon chuc nang:"); scanf_s("%d", &chon);
		switch (chon)
		{
		case 0:
			exit = true;
			break;
		case 1: nhapfile(a, n);
			break;
		case 2:loadfile(a, n);
			break;
		case 3:xuatmang(a, n);
			break;
		case 4:lietkebaitapchualam(a, n);
			break;
		case 5:printf(" diem: %d", tinhdiem(a, n));
			break;
		case 6:nhapvao1bt(a, n);
			break;
		default:
			exit = true;
			break;
		}
	} while (!exit);
	_getch();
}