//FLOW014
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int T;
    cin >> T;
    long int hard,tens;
    float carb;
    while(T--)
    {
        bool flags[3] = {0,0,0};
        //Get data
        scanf("%ld %f %ld", &hard, &carb, &tens);
        //Conditions
        if (hard > 50) flags[0] = 1;
        if (carb < 0.7) flags[1] = 1;
        if (tens > 5600) flags[2] = 1;
        //Conditions
        if (flags[0]+flags[1]+flags[2] == 3) cout << 10 << '\n';
        else if (flags[0]+flags[1] == 2) cout << 9 << '\n';
        else if (flags[1]+flags[2] == 2) cout << 8 << '\n';
        else if (flags[0]+flags[2] == 2) cout << 7 << '\n';
        else if (flags[0]+flags[1]+flags[2] == 0) cout << 5 << '\n';
        else cout << 6 << '\n';
    }
    return 0;
}