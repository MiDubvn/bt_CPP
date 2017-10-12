#include < iostream>
#include <conio.h>
using namespace std;
//double T(int n)
//{
//	if (n == 1) return 1;
//	return T(n - 1) + n / (pow((n), (n)));
//}
//long A(int n)
//{
//
//	if (n == 1) return 1;
//	return A(n - 1) + (n - 1)*n;
//}
float bt1(int n)
{
	if (n == 1) return 1;
	return bt1 (n - 1) + (1.0 / n);
}
float bt2(int n)
{
	if (n == 1) return 1;
	return bt2(n - 1) + (1.0 / ((n - 1) + n));
}
long bt3(int n,int x)
{
	if (n == 1) return x;
	return bt3(n - 1, x)*x;
}
long bt4(int n)
{
	if (n == 1) return 1;
	return bt4(n - 1) + (n - 1)*n;
}
long bt5(int n, int x)
{
	if (n == 0) return x;
	return bt5(n - 1, x) + pow(x, (2 * n) + 1);
}
int B(int n)
{
	if (n == 0) return 0;
	return B(n / 10) + 1;
}
int A(int n)
{
	if (n == 0) return 0;
	return (n % 10) * pow(10, (B(n) - 1)) + A(n / 10);
}
int C(float o)
{
	int m = o;
	if (m-o==0) return 0;
	return C(o * 10)+1;
}
int D(int n)
{
	if (n == 0) return 0;
	return (n % 10) + D(n / 10);
}
int E(int n)
{
	static int min = n % 10;
	if (n == 0) return min;
	if (min > (n % 10))
		min = n % 10;
	return E(n / 10);
}
bool F(int n)
{
	static bool check = true;
	if (n == 0) return check;
	if ((n % 10) % 2 == 0)
		check &= false;
	return F(n / 10);
}
void main()
{
	int n,x;
	float o;
	cout << "nhap n:"<< endl;
	cin >> n;
	cout << "nhap x:" << endl;
	cin >> x;
	cout << bt1(n) << endl
		<< bt2(n) << endl
		<< bt3(n, x) << endl
		<< bt4(n) << endl
		<< bt5(n, x) << endl
		<< A(n) << endl
		<< B(n) << endl
		<< C(n) << endl
		<< D(n) << endl
		<< E(n) << endl
		<< F(n) << endl;
	_getch();
}

