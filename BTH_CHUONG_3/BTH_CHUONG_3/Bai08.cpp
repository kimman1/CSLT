//#include <iostream>
//using namespace std;
//int main()
//{
//	int thang; int nam;
//	cout << "Nhap vao thang: "; cin >> thang;
//	cout << "Nhap vao nam: "; cin >> nam;
//	switch (thang)
//	{
//	case 1: case 3 : case 5: case 7 : case 8: case 10 : case 12:
//		cout << "Thang co 31 ngay" << endl; 
//		break;
//	case 4: case 6 : case 9: case 11:
//		cout << "Thang co 30 ngay" << endl; 
//		break;
//	case 2:
//		if(nam % 400 == 0 || (nam % 4 == 0 && nam %100 != 0) )
//			cout << "Thang co 29 ngay" << endl;
//		else 
//			cout << "Thang co 28 ngay" << endl;
//		break;
//	default:
//		cout << "Thang ban nhap khong co" << endl;
//	}
//	system("pause");
//	return 0;
//}