#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float X,Y,avg;
    
    cin>>X;
    
    while(X<0 || X>10)
    {
        cout<<"nota invalida\n";
        cin>>X;
        
    }
    
    cin>>Y;
    
    while(Y<0 || Y>10)
    {
        cout<<"nota invalida\n";
        cin>>Y;
        
    }
    
    avg= (X+Y)/2.0;
    
    cout<<"media = "<<fixed<<setprecision(2)<<avg<<endl;
    
    
    return 0;
}

