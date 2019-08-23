//#include <iostream>
//using namespace std;
//double GTDT(int a[], int n , int x)
//{
//	double kq = 0;
//	for(int i=0; i<=n; i++)
//	{
//		kq = kq + (a[i]*pow(x*1.0,n));
//	}
//	return kq;
//}
//void nhap(int a[], int arrSize)
//{
//	for(int i=0; i<arrSize; i++)
//	{
//		cout << "a[" << i << "]: ";
//		cin >> a[i];
//	}
//}
//void xuat(int a[], int n)
//{
//	for(int i=0; i<n; i++)
//	{
//		if(i!= n-1)
//		{
//			cout << a[i] << ", ";
//		}
//		else
//		{
//			cout << a[i];
//		}
//	}
//	cout << endl;
//}
//void main()
//{
//	int n, x, a[100];
//	cout << "Nhap so phan tu mang: ";
//	cin >> n;
//	nhap(a,n);
//	cout << "Nhap x: "; cin >> x;
//	cout << "Gia tri da thuc: " << GTDT(a,n,x) << endl;
//	system("pause");
//}