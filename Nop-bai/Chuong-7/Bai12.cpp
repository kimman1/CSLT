//#include <iostream>
//using namespace std;
//int main()
//{
//	int a[100], n , i;
//	cout << "Nhap so n: ";
//	cin >> n;
//	for(int i=2; i<=n; i++)
//	{
//		a[i] = i;
//	}
//	i=2;
//	while(i <= sqrt((double)n))
//	{
//		int j=i;
//		while(j*i<=n)
//		{
//			if(a[i]!= 0)
//				a[i*j] = 0;
//			j++;
//		}
//		i++;
//	}
//	cout << "Cac so nguyen to <= n \n";
//	for(int i=2; i<=n; i++)
//	{
//		if(a[i] != 0)
//			cout << " " << a[i];
//		cout << endl;
//		//return 1;
//	}
//	system("pause");
//}