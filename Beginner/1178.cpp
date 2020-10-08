#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double T;
    double N[100];
    
    cin>>T;
    
    for(int i=0;i<100;i++)
    {
        N[i]=T;
        T=T/2;
    }
    for(int i=0;i<100;i++)
    {
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<N[i]<<endl;
    }    
    
    return 0;
}
