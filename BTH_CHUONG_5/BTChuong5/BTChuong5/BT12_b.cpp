#include <iostream>
using namespace std;
void main()
{
	int h;
	do
	{
		cout << "Nhap chieu cao: " ;
		cin >> h;
		if(h<=0)
			cout << "Nhap sai. Nhap lai " << endl;
	}while(h<=0);
	for(int i =h; i >= 1; i--)
  {
      for(int j = 1; j <= h; j++)
      {
       if(j<=i-1 )
        cout << " ";
        else
        cout << "*";
      }
      cout << endl;
  }
	system("pause");
}
