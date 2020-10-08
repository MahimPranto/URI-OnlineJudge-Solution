#include <iostream>
#include<iomanip>

using namespace std;


int main()
{
    float A,B,C,area,p;
    cin>>A>>B>>C;
    
    if((A+B)>C && (B+C)>A && (C+A)>B)
    {
        p=A+B+C;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<p<<endl;
    }
    else
    {
        area=0.5*(A+B)*C;
        cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;
    }
    return 0;
}


