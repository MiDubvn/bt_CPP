#pragma once
#ifndef INTERCHANGESORT_H
#define INTERCHANGESORT_H
typedef bool(*SortType)(int, int);
void interchangeSort(int *a, int n,SortType func);
bool tangdan(int a, int b);
bool giamdan(int a, int b);



#endif 