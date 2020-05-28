//HS08TEST
#include <iostream>
using namespace std;

int main()
{
  unsigned int cas_inp;
  float bal_inp;
  //Get cash and balance
  cin >> cas_inp;
  cin >> bal_inp;
  //Transaction
  if((cas_inp%5 == 0) && (cas_inp <= bal_inp-0.5))
  {
    cout << bal_inp - cas_inp - 0.5;
  }
  else
  {
    cout << bal_inp;
  }

  return 0;
}
