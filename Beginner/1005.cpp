#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double A,B,avg;
    
    cin>>A>>B;
    
    A=A*3.5;
    B=B*7.5;
    avg=(A+B)/11;
    
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<avg<<endl;
     
    return 0;
}
