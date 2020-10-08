#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

int main () 
{
    float s,tax;
    
    cin>>s;
    
    if(s>=0 && s<=2000)
        cout<<"Isento\n";
    else if(s>=2000.01 && s<=3000)
    {
        tax=(s-2000)*.08;
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    else if(s>=3000.01 && s<=4500)
    {
        tax=(s-3000)*.18+(1000*.08);
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    else if(s>4500)
    {
        tax=(s-4500)*.28+(1500*.18)+(1000*.08);
        cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
    }
    
    return 0;
}


 
 
 
 
 
 
 
