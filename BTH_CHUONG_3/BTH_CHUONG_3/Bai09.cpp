//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	char pheptoan;
//	int soA, soB;
//	double result;
//	bool error = false;
//	cout << "Nhap so A: "; cin >> soA;
//	cout << "Nhap so B: "; cin >> soB;
//	cout << "Nhap phep toan: "; cin >> pheptoan;
//	switch(pheptoan)
//	{
//	case '+':
//		result = soA+soB;
//		break;
//	case '-':
//		result = soA-soB;
//		break;
//	case '*':
//		result = soA*soB;
//		break;
//	case '/':
//		if(soB == 0)
//		{
//			error = true;
//			break;
//		}
//		else
//			result = (double)soA/soB;
//		break;
//	default:
//		error = true;
//	}
//	if(error)
//		cout << "Loi nhap lieu" << endl;
//	else
//		cout << "Ket qua: " << soA << pheptoan << soB << " = " << setprecision(2) << result << endl;
//	system("pause");
//	return 0;
//}