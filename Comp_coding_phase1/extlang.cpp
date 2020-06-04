//FRGTNLNG
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int T;
    scanf("%d", &T);
    while(T--)
    {
        unsigned int N, K;
        string lang_dict[100];
        bool contains[100] = {0};
        cin >> N >> K;
        for(int i=0; i<N; i++)
            cin >> lang_dict[i];
        for(int i=0; i<K; i++)
        {
            //Get input phrases
            unsigned int L;
            cin >> L;
            for(int j=0; j<L; j++)
            {
                string phrase;
                cin >> phrase;
                //Check if phrase in the lang_dicts
                for(int k=0; k<N; k++)
                {
                    //If present - or
                    if(lang_dict[k] == phrase) 
                    {
                        contains[k] = contains[k] || 1;
                        break;
                    }
                }   
            }
        }
        for(int i=0; i<N; i++)
        {
            if(contains[i]) cout << "YES";
            else cout << "NO";
            if(i != N-1) cout << ' ';
        }
        cout << '\n'; 
    }
    return 0;
}