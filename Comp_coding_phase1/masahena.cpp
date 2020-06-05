//AMR15A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int N;
    unsigned int num_weapons;
    unsigned int luckys=0;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        cin >> num_weapons;
        if(num_weapons%2 == 0) luckys++;
    }
    if(luckys > N/2) cout << "READY FOR BATTLE\n";
    else cout << "NOT READY\n";
    return 0;
}