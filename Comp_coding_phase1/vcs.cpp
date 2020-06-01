//VCS
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int T;
    cin >> T;
    int N, M, K;
    int ignored[100];
    int tracked[100];
    while(T--)
    {
        int ignored[100] = {};
        int tracked[100] = {};
        int num_ig_tr = 0;
        int num_nig_ntr = 0;
        //Initialize
        N = 0;  //Number of source files
        M = 0;  //Number of ignored source files
        K = 0;  //Number of tracked source files
        //Get data
        scanf("%d %d %d", &N, &M, &K);
        for (int i=0; i<M; i++)
        {
            cin >> ignored[i];
        }
        for (int i=0; i<K; i++)
        {
            cin >> tracked[i];
        }
        //Check each number
        for (int i=1; i<=N; i++)
        {
            int in_ig = 0;
            int in_nig = 0;
            int in_tr = 0;
            int in_ntr = 0;
            //If i in ignored list
            for (int j=0; j<M; j++)
            {
                if(i == ignored[j])
                {
                    in_ig=1;
                    break;
                }
            }
            //If i is not in ignored list
            if(in_ig != 1) in_nig=1;
            //If i in tracked list
            for (int k=0; k<K; k++)
            {
                if(i == tracked[k])
                {
                    in_tr=1;
                    break;
                }
            }
            //If i not in tracked list
            if(in_tr != 1) in_ntr=1;
            //Now check for conditions
            if(in_ig && in_tr) num_ig_tr++;
            if(in_nig && in_ntr) num_nig_ntr++;
        }
        cout << num_ig_tr << ' ' << num_nig_ntr << '\n';
    }
    return 0;
}