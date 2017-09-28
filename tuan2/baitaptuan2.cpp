#include<iostream>
#include<string.h>
#include<conio.h>
struct BTVN
{
	char mabt[100];
	char tenbt[100];
	char trangthai[100];
};
void bokhoangtrang(char s[]);
void docfile(FILE *fbt, BTVN list[], int &n)
{
	n = 0;
	while (!feof(fbt))
	{
		fscanf_s(fbt, "%s", &list[n].mabt);
		fscanf_s(fbt, "%s", &list[n].tenbt);
		fscanf_s(fbt, "%s", &list[n].trangthai);
	}
}
void bokhoangtrang(char s[])
{
	int l = strlen(s);
	int i = 0;
	while (i < l && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '))i++;
	strcpy_s(s, 100, &s[i]);
	l = l - i;
	i = l - 1;
	while (i < l && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '))i--;
	s[i + 1] = '\0';
}
void xuatfile(FILE *fout, BTVN list[], int n)
{
	for (int i = 0; i < n; i++)
		fprintf(fout, "%d\t%s\t%s\t%s\n", list[i].mabt, list[i].tenbt, list[i].trangthai);
}
void main()
{
	char dirIn[100];
	char dirOut[100];
	printf("Nhap duong dan file xuat: \n");
	gets_s(dirIn);
	printf("Nhap duong dan file nhap: \n");
	gets_s(dirOut);
	FILE *fbt;
	fopen_s(&fbt ,dirIn, "rt");
	FILE *fout;
	fopen_s(&fout, dirOut, "wt");
	if (!fbt || fout)
	{
		printf("Error");
		_fcloseall;
	}
	BTVN list[100];
	int n;
	if (fbt != NULL)
	{
		docfile(fbt, list, n);
	}
	xuatfile(fout, list, n);
	fclose(fout);
	fclose(fbt);
	_getch();
}