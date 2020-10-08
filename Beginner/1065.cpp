#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    int a,b,c,d,e,p;
    cin>>a>>b>>c>>d>>e;
    
    if(a%2==0)
        p++;
    if(b%2==0)
        p++;
    if(c%2==0)
        p++;
    if(d%2==0)
        p++;
    if(e%2==0)
        p++;
        
    cout<<p<<" valores pares\n";
    return 0;
}
