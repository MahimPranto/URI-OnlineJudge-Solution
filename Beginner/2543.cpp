#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,L;
    
    while(cin>>N>>L)
    {
        if(cin.eof())
            break;
        int I,J,C=0;
        for(int i=0;i<N;i++)
        {
            cin>>I>>J;
            if(I==L)
            {    
                if(J==0)
                    C++;
            }    
        }
        cout<<C<<endl;
    }

    
    return 0;
}
