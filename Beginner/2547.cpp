#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,Hmax,Hmin,H;
    
    while(cin>>N)
    {
        if(cin.eof())
            break;
        cin>>Hmin>>Hmax;
        int C=0;
        
        for(int i=0;i<N;i++)
        {
            cin>>H;
            if(H>=Hmin && H<=Hmax)
                C++;
        }
        cout<<C<<endl;
    }

    
    return 0;
}
