//#include <iostream>
//using namespace std;
//void menu()
//{
//	cout << "Cac phep toan: " << endl;
//	cout << "1.Cong" << endl;
//	cout << "2.Tru" << endl;
//	cout << "3.Nhan" << endl;
//	cout << "4.Chia" << endl;
//}
//int cong(int a, int b)
//{
//	return a+b;
//}
//int tru(int a, int b)
//{
//	return a-b;
//}
//int nhan(int a, int b)
//{
//	return a*b;
//}
//double chia(int a, int b)
//{
//	return (double)a/b;
//}
//int main()
//{
//	int a,b,chon;
//	char tt;
//	do
//	{
//		system("cls");
//		menu();
//		cout << "Nhap 2 so nguyen: ";
//		cin >> a >> b;
//		cout << "Chon 1-4: ";
//		cin >> chon;
//		switch(chon)
//		{
//		case 1:
//			cout << a << "+" << b << "= " << cong(a,b);
//			break;
//			case 2:
//			cout << a << "-" << b << "= " << tru(a,b);
//			break;
//			case 3:
//			cout << a << "*" << b << "= " << nhan(a,b);
//			break;
//			case 4:
//				if(b!= 0)
//				{
//					cout << a << "/" << b << "= " << chia(a,b);
//				}
//				else
//				{
//					cout << "Loi chia cho 0" << endl;
//				}
//			break;
//		}
//		do
//		{
//			cout << "\n Tiep Tuc (C/K): "; cin >> tt;
//			if((tt!= 'C' && tt != 'K') && (tt!= 'c' && tt != 'k') )
//				cout << "Nhap sai, Nhap lai" << endl;
//		}while((tt != 'c' && tt!= 'k') && (tt != 'C' && tt!= 'K'));
//	}while(tt == 'c' || tt == 'C');
//}