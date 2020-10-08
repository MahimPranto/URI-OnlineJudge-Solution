#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int P;
    
    while(cin>>P)
    {
        if(P==-1)
            break;
        else if(P==0)
            cout<<P<<endl;
        else
            cout<<P-1<<endl;
        
    }
    return 0;
}
