#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int X;
    float Y,km;
    
    cin>>X>>Y;
    
    km=(X/Y);
    
    cout<<fixed<<setprecision(3)<<km<<" km/l"<<endl;
    
    return 0;
}
