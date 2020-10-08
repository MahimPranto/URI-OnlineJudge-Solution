#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    
    while(cin>>N)
    {
        if(cin.eof())
            break;
        int C=0;
        
        while(N!=1)
        {
            N=N/2;
            C++;
        }
        cout<<C<<endl;
    }

    
    return 0;
}
