#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N,s=1,e=3;
    cin>>N;
    
    for(int i=1;i<=N;i++)
    {
        for(int j=s;j<=e;j++)
        {
            cout<<j<<" ";
            
        }
        s+=4;
        e+=4;
        cout<<"PUM\n";
        
    }
    return 0;

}
