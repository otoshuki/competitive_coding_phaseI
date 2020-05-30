//FLOW001
#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned int T;
  int a,b;
  scanf("%d", &T);
  //Basically for loop until exhaustion
  while(T--)
  {
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
  }
  return 0;
}
