#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    int X,Y;
    float total;
    cin>>X>>Y;
    
    if(X==1)
    {
        total=4.00*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;
    } 
    else if(X==2)
    {
        total=4.50*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;
    }
    else if(X==3)
    {
        total=5.00*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;
    }
    else if(X==4)
    { 
        total=2.00*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;
    }
    else if(X==5)
    { 
        total=1.50*Y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;
    }    

    
    return 0;
}
