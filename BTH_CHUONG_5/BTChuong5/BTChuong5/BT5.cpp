//#include<iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int n1, n2,dem = 0, j=0;
//	bool laNT = true;
//	do
//	{
//		cout << "Nhap n1: " ; 
//		cin >> n1;
//		cout << "Nhap n2: " ;
//		cin >> n2;
//		if(n1<=0 || n1 > n2)
//			cout << "Nhap sai. Moi nhap lai" << endl;
//	}while(n1 <= 0 || n1 > n2);
//	for(int i=n1 ; i <= n2; i++)
//	{
//		laNT = true;
//		j = 2;
//		while(j <=sqrt((double)i) && laNT)
//		{
//			if(i%j != 0)
//			{
//				j++;
//			}
//			
//			else
//			{
//				laNT = false;
//			}
//		}
//		if(laNT)
//			dem++;
//	}
//	cout << "Co " << dem << " So NT tu n1 den n2" << endl;
//	system("pause");
//	return 0;
//
//}