#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    string a;
    double s,t,total;
    
    cin>>a>>s>>t;
    
    total=s+(t*0.15);
    

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}
