#pragma once
#ifndef INTERCHANGESORT_H
#define INTERCHANGESORT_H
typedef bool(*SortType)(int, int);
bool tangdan(int a, int b);
bool giamdan(int a, int b);

void interchangeSort(int *a, int n,SortType func);

void BubbleSort(int *a, int n, SortType func);

void SelectSort(int *a, int n, SortType func);

void InsertSort(int *a, int n, SortType func);

#endif 