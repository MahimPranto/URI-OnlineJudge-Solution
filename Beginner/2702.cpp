#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Ca,Ba,Pa,Cr,Br,Pr;
    cin>>Ca>>Ba>>Pa;
    cin>>Cr>>Br>>Pr;
    
    int sum=0;
    
    if(Cr>Ca)
        sum+=(Cr-Ca);
    if(Br>Ba)
        sum+=(Br-Ba);
    if(Pr>Pa)
        sum+=(Pr-Pa);
    
    cout<<sum<<endl;
    
    return 0;
}
