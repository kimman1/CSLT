//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void nhap(int a[], int n )
//{
//	for(int i=0; i<n; i++)
//	{
//		int randNum = rand()%50;
//		a[i] = randNum;
//	}
//}
//void xuat(int a[], int n )
//{
//	//cout << "Mang sap xep la: ";
//	for(int i=0; i<n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//void xeptang(int a[], int n)
//{
//	for(int i=0; i<n-1; i++)
//	{
//		for(int j=i+1; j<n; j++)
//		{
//			if(a[j] < a[i])
//				swap(a[j],a[i]);
//		}
//	}
//}
//void xepgiam(int a[], int n)
//{
//	for(int i=0; i<n-1; i++)
//	{
//		for(int j=i+1; j<n; j++)
//		{
//			if(a[j] > a[i])
//				swap(a[j],a[i]);
//		}
//	}
//}
//void main()
//{
//	int a[100], n;
//	cout << "Nhap so phan tu mang: " ;
//	cin >> n;
//	nhap(a,n);
//	cout << "Xuat mang: " << endl;
//	xuat(a,n);
//	xeptang(a,n);
//	cout << "Mang sap xep tang: " << endl;
//	xuat(a,n);
//	xepgiam(a,n);
//	cout << "Mang sap xep tang: " << endl;
//	xuat(a,n);
//	system("pause");
//}