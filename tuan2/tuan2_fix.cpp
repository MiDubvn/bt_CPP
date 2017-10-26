//#include<stdio.h>
//#include<conio.h>
//#include <string.h>
//#define MAX 100
//typedef struct BT
//{
//	int maBT;
//	char tenBT[10];
//	char trangthai[15];
//};
//void loadfile(BT a[], int &n)
//{
//	n = 0;
//	FILE*f;
//	fopen_s(&f,"baitaptuan.txt", "rt");
//	if (f == NULL)
//	{
//		printf("ko load dc file");
//		return;
//	}
//	while (!feof(f))
//	{
//		if (fscanf_s(f, "%d", &a[n].maBT) && fscanf_s(f, "%s", a[n].tenBT) && fgets(a[n].trangthai, 10, f))
//			n++;
//	}
//	fclose(f);
//}
//void xuatbt(BT z)
//{
//	printf("%d %s %s\n", z.maBT, z.tenBT, z.trangthai);
//}
//void xuatmang(BT a[], int n)
//{
//	for (int i = 0; i<n; i++)
//		xuatbt(a[i]);
//}
//void lietkebaitapchualam(BT a[], int n)
//{
//	printf("bai tap chua lam\n");
//	for (int i = 0; i<n; i++)
//		if (strcmp(a[i].trangthai, " chua lam") == 0)
//			xuatbt(a[i]);
//}
//int tinhdiem(BT a[], int n)
//{
//	int diem = 0;
//	for (int i = 0; i<n; i++)
//		if (strcmp(a[i].trangthai, " da lam") == 0)
//			diem += 10;
//		else if (strcmp(a[i].trangthai, " bi loi") == 0)
//			diem += 5;
//	return diem;
//}
//void main()
//{
//	BT a[MAX];
//	int n;
//	loadfile(a, n);
//	xuatmang(a, n);
//	lietkebaitapchualam(a, n);
//	printf("diem %d", tinhdiem(a, n));
//	_getch();
//}