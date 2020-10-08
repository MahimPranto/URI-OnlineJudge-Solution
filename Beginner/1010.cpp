#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a,b,d,e;
    float c,f,total;
    
    
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    
    total=(b*c)+(e*f);
    
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}
