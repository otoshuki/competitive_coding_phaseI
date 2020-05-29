//INTEST
#include <iostream>

using namespace std;

int main()
{
  unsigned int n, k, t, div = 0;

  cin >> n;
  cin >> k;
  for(int i=0; i<n; i++)
  {
    cin >> t;
    if(t%k == 0) div++;
  }
  cout << div;
  return 0;
}
