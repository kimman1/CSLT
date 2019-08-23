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
//bool tim(int a[], int n , int x)
//{
//	bool kq = false;
//	int i=0;
//	while (i<n && a[i]  !=kq)
//	{
//		if(a[i] == x)
//		{
//			kq = true;
//		}
//		i++;
//	}
//	return kq;
//}
//void daonguoc(int a[], int n)
//{
//	int i=0, j=n-1, temp;
//	while(i <j)
//	{
//		temp =a[i];
//		a[i]= a[j];
//		a[j] = temp;
//		i++; j--;
//	}
//}
//void xoa(int a[], int &n , int p)
//{
//	for(int i=p; i<n-1; i++)
//	{
//		a[i] = a[i+1];
//		
//	}
//	n--;
//}
//void main()
//{
//	int a[50], n,x,p;
//	cout << "Nhap so phan tu: ";
//	cin >> n;
//	nhap(a,n);
//	cout << "Xuat mang: ";
//	xuat(a,n);
//	cout << "mang dao nguoc: ";
//	daonguoc(a,n);
//	xuat(a,n);
//	cout << "Nhap vi tri can xoa: ";
//	cin >> p;
//	xoa(a,n,p);
//	xuat(a,n);
//	system("pause");
//}