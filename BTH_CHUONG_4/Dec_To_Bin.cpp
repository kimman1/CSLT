#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int Bin=0, Dec,i=0;
	cout << "Nhap so DEC: ";
	cin >> Dec;
	int temp = Dec;
	do
	{
		Bin = Bin + ((temp%2) * pow(10.0,i));
		temp = temp /2;
		i++;
	}while(temp >0);
	cout << "Bin: " << Bin << endl;
	system("pause");
	return 0;
}