//COMM3
#include<bits/stdc++.h>
using namespace std;

float calc_dist(long int loc1[2], long int loc2[2])
{
  return sqrt(pow(loc1[0]-loc2[0], 2) + pow(loc1[1]-loc2[1], 2));
}

int main()
{
  unsigned int T;
  scanf("%d", &T);
  while(T--)
  {
    unsigned int R;
    long int locs[3][2];
    //Get data
    scanf("%d", &R);
    for(int i=0; i<3; i++)
      scanf("%ld %ld", &locs[i][0], &locs[i][1]);
    //Calc dist for each combination
    float dist1 = calc_dist(locs[0], locs[1]);
    float dist2 = calc_dist(locs[1], locs[2]);
    float dist3 = calc_dist(locs[2], locs[0]);
    if(dist1<=R && dist2<=R) cout << "yes\n";
    else if(dist1<=R && dist3<=R) cout << "yes\n";
    else if(dist2<=R && dist3<=R) cout << "yes\n";
    else if(dist1<=R && dist2<=R && dist3<R) cout << "yes\n";
    else cout << "no\n";
  }
}
