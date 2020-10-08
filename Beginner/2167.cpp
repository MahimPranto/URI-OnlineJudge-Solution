#include <iostream>

using namespace std;

int main() 
{

    int t,b=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    bool x=true;
    for(int i=0;i<t-1;i++)
    {
        if(a[i+1]<a[i])
        {
            x=false;
            cout<<i+2<<endl;
            break;
        }
    }
    if(x)
    cout<<"0\n";


    return 0;
}
