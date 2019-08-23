#include <iostream>
#include <iomanip>
using namespace std;
int tong(int n)
{
	int sum = 0;
	for(int i=1; i<=n; i++)
	{
		sum += i;
	}
	return sum;
	cout << sum << endl;
}
void main()
{
	double tongdathuc=0;
	int n, a[100];
	cout << "Nhap n: ";
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		double sum = 1.0*tong(i);
		tongdathuc = tongdathuc + (1.0/sum);
	}
	cout << "Tong da thuc la: " <<  setprecision(3) << tongdathuc << endl;
	system("pause");
}