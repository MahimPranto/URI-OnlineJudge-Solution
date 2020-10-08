#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,V;
    
    
    while(cin>>N)
    {
        if(cin.eof())
            break;
        
        int C=0;
        float F=(2/3.0)*N;
        for(int i=0;i<N;i++)
        {
            cin>>V;
            if(V==1)
                C++;
        }
        if(C>=F)
            cout<<"impeachment\n";
        else
            cout<<"acusacao arquivada\n";
    }
    
    return 0;
}
