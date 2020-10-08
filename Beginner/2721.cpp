#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A[9],sum=0;
    
    for(int i=0;i<9;i++)
    {
        cin>>A[i];
        sum+=A[i];
        
    }
    int F=sum%9;
    
    if(F==0)
        cout<<"Rudolph\n";
    else if(F==1)
        cout<<"Dasher\n";
    else if(F==2)
        cout<<"Dancer\n";
    else if(F==3)
        cout<<"Prancer\n";
    else if(F==4)
        cout<<"Vixen\n";
    else if(F==5)
        cout<<"Comet\n";
    else if(F==6)
        cout<<"Cupid\n";
    else if(F==7)
        cout<<"Donner\n";
    else if(F==8)
        cout<<"Blitzen\n";

    return 0;
}
