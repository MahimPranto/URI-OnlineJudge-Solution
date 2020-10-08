#include <iostream>
#include<cmath>

using namespace std;

int main ()
{
    int T;
    cin>>T;
    
    string a,b;
    
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b;
        if(a==b)
            cout<<"Caso #"<<i<<": De novo!\n";
        else if(a=="pedra")
            {
                if(b=="lagarto")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
                if(b=="papel")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
                if(b=="tesoura")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
                if(b=="Spock")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
            }
        else if(a=="papel")
            {
                if(b=="lagarto")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";
                if(b=="pedra")
                    cout<<"Caso #"<<i<<": Bazinga!\n";                
                if(b=="tesoura")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";
                if(b=="Spock")
                    cout<<"Caso #"<<i<<": Bazinga!\n";                
            }
        else if(a=="tesoura")
            {
                if(b=="lagarto")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
                if(b=="papel")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
                if(b=="pedra")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
                if(b=="Spock")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
            }
        else if(a=="lagarto")
            {
                if(b=="pedra")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
                if(b=="papel")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
                if(b=="tesoura")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
                if(b=="Spock")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
            }
        else if(a=="Spock")
            {
                if(b=="lagarto")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
                if(b=="papel")
                    cout<<"Caso #"<<i<<": Raj trapaceou!\n";                
                if(b=="tesoura")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
                if(b=="pedra")
                    cout<<"Caso #"<<i<<": Bazinga!\n";
            }
    }
  return 0;
}
