#include <iostream>
#include <string>
using namespace std;
int main()
{
    int h;
  cout << "Nhap h: ";
  cin >> h ;
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
  
}
