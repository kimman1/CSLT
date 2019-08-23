//#include <iostream>
//using namespace std;
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
//int vitri(int a[], int n)
//{
//	int VT =0 ;
//	for(int i=1; i<n; i++)
//	{
//		if(a[VT] > a[i])
//			VT = i;
//	}
//	return VT;
//}
//void main()
//{
//	int a[50],n;
//	cout << "Nhap so phan tu mang: ";
//	cin >> n;
//	nhap(a,n);
//	cout << "Vi tri nho nhat trong mang: " << vitri(a,n) << endl;
//	system("pause");
//}