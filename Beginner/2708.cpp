#include <iostream>

using namespace std;

int main()
{
    string A;
    int T;
    
    int sum=0,in=0,out=0;
    
    while(cin>>A)
    {
        if(A=="ABEND")
            break;
        
        cin>>T;
        
        if(A=="SALIDA")
        {
            sum+=T;
            in++;
        }
        else if(A=="VUELTA")
        {
            sum-=T;
            out++;
        }
    }

    cout<<sum<<endl<<in-out<<endl;
    
    return 0;
}
