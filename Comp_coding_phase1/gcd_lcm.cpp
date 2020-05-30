//FLOW016
#include <bits/stdc++.h>
using namespace std;

int get_gcd(int a, int b)
{
  int num_min, num_max, rem;
  num_min = min(a,b);
  num_max = max(a,b);
  while(1)
  {
    rem = num_max % num_min;
    num_max = num_min;
    num_min = rem;
    if(num_min == 0) return num_max;
  }

}

int main()
{
  unsigned int T;
  int a,b, gcd, lcm;
  scanf("%d", &T);
  //Basically for loop until exhaustion
  while(T--)
  {
    scanf("%d %d", &a, &b);
    //GCD and LCM
    gcd = get_gcd(a,b);
    lcm = a*b/gcd;
    printf("%d %d\n", gcd, lcm);
  }
  return 0;
}
