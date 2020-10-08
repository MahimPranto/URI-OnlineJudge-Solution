#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int C;
    cin>>C;
    
    float T;
    string A;
    
    for(int i=0;i<C;i++)
    {
        cin>>A;    
        T=A.length()/100.0;
        cout<<fixed<<setprecision(2)<<T<<endl;
        
    }    
    return 0;

}
