//#include <iostream>
//using namespace std;
//int giaithua(int n)
//{
//	int tich =1;
//	for(int i=1; i<=n; i++)
//	{
//		tich *= i;
//	}
//	return tich;
//}
//int tohop(int n, int k)
//{
//	int kq = 1;
//	kq = giaithua(n)/(giaithua(k)*giaithua(n-k));
//	return kq;
//}
//void tamgiacpascal(int h)
//{
//	for(int i=0; i<h; i++)
//	{
//		for(int j=0; j<=i; j++)
//		{
//			cout << " " << tohop(i,j);
//		}
//		cout << endl;
//	}
//}
//void main()
//{
//	int n,k;
//	cout << "nhap vao n: "; cin >> n;
//	cout << "nhap vao k: "; cin >> k;
//	cout << "To hop chap k cua n: " << tohop(n,k) << endl;
//	tamgiacpascal(5);
//	system("pause");
//}