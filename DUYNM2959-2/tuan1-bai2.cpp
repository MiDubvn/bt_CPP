#include <iostream>
#include <conio.h>
typedef struct diem
{
	int x;
	int y;
};
typedef struct tamgiac
{
	diem d1;
	diem d2;
	diem d3;
};
void nhaptamgiac(tamgiac &tg)
{
	printf("hoang do 1:"); scanf_s("%d", &tg.d1.x);
	printf("hoanh do 2:"); scanf_s("%d", &tg.d2.x);
	printf("hoanh do 3:"); scanf_s("%d", &tg.d3.x);
	printf("tung do 1:"); scanf_s("%d", &tg.d1.y);
	printf("tung do 2:"); scanf_s("%d", &tg.d2.y);
	printf("tung do 3:"); scanf_s("%d", &tg.d3.y);
}
float khoangcach(diem d1, diem d2)
{
	return sqrt(pow((d1.x - d2.x), 2) + pow((d1.y - d2.y), 2));
}
float chuvi( tamgiac tg)
{
	printf("\n chu vi la:");
	return khoangcach(tg.d1, tg.d2) + khoangcach(tg.d2, tg.d3) + khoangcach(tg.d3, tg.d1);
}
float dientich(tamgiac tg)
{
	printf(" \n dien tich la");
	return 0.5*(abs(((tg.d1.x - tg.d2.x)*(tg.d3.y - tg.d2.y) - ((tg.d3.x - tg.d2.x)*(tg.d1.y - tg.d2.y)))));
}
void main()
{
	tamgiac(tg);
	nhaptamgiac(tg);
	printf("%f", chuvi(tg));
	printf("%f", dientich(tg));
	_getch();
}