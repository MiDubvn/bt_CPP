#include <iostream>
#include <conio.h>
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
float khoangcach(diem d1, diem d2)
{
	printf("khoang cach la:");
	return sqrt(pow((d1.x - d2.x), 2) + pow((d1.y - d2.y), 2));
}
diem doixung(diem d)
{
	diem ketqua;
	ketqua = { -1 * d.x, -1 * d.y };
	return ketqua;
}
void matphang(diem d)
{
	if (d.x > 0 && d.y > 0)
		printf("\n thuoc mp 1");
	else if (d.x > 0 && d.y < 0)
		printf("\n thuuoc mp 4");
	else if (d.x < 0 && d.y < 0)
		printf("\n thuoc mp 3");
	else if (d.x < 0 && d.y>0);
	    printf("\n thuoc mp 2");
	else printf(" diem nam tren truc toa do");
}
void main()
{
	diem d1, d2;
	nhapdiem(d1);
	nhapdiem(d2);
	printf("%f", khoangcach(d1, d2));
	diem dx = doixung(d1);
	printf("\n%d,%d", dx.x, dx.y);
	matphang(d1);
	_getch();
}