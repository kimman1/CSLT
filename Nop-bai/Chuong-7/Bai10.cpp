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
//void demtrung(int a[], int &n)
//{
//	int dem;
//	for(int i =0; i<n; i++)
//	{
//		dem = 1;
//		for(int j=i+1; j<n; j++)
//			if(a[i] == a[j])
//			{
//			for(int k=j; k<n-1; k++)
//				a[k] = a[k+1];
//			n--; j--;
//				dem++;
//	}
//		cout << a[i] << " Co so pt la: " << dem;
//		cout << endl;
//	}
//}
//void main()
//{
//	int n,a[100];
//	cout << "Nhap so phan tu mang: "; 
//	cin >> n;
//	nhap(a,n);
//	xuat(a,n);
//	demtrung(a,n);
//	system("pause");
//}
