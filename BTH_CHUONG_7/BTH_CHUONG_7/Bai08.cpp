//#include <iostream>
//using namespace std;
//int demx(int a[], int n , int x)
//{
//	int dem =0;
//	for(int i=0; i<n; i++)
//	{
//		if(a[i] == x)
//			dem ++;
//	}
//	return dem;
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
//	int n,a[100],x;
//	cout << "Nhap so phan tu mang: ";
//	cin >> n;
//	nhap(a,n);
//	cout << "Nhap x: "; cin >> x;
//	cout << "So lan xuat hien cua " << x << ": " << demx(a,n,x) << endl;
//	system("pause");
//}