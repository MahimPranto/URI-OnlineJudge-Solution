#include <iostream>
#include<iomanip>

using namespace std;

int main () 
{
    float s,a,fs;
    cin>>s;
    
    if(s>=0 && s<=400)
    {
       a=s*0.15;
       fs=s+a;
       
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<fs<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl<<"Em percentual: 15 %\n";
        
    }
    
    else if(s>=400.01 && s<=800)
    {
       a=s*0.12;
       fs=s+a;
       
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<fs<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl<<"Em percentual: 12 %\n";
        
    }    
    
    else if(s>=800.01 && s<=1200)
    {
       a=s*0.10;
       fs=s+a;
       
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<fs<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl<<"Em percentual: 10 %\n";
        
    }
    
    else if(s>=1200.01 && s<=2000)
    {
       a=s*0.07;
       fs=s+a;
       
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<fs<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl<<"Em percentual: 7 %\n";
        
    }
    
    else if(s>2000)
    {
       a=s*0.04;
       fs=s+a;
       
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<fs<<endl<<"Reajuste ganho: "<<fixed<<setprecision(2)<<a<<endl<<"Em percentual: 4 %\n";
        
    }
    return 0;
}


 
