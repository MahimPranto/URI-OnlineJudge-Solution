#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    
    while(x!=2002)
    {
        cout<<"Senha Invalida\n";
        cin>>x;
        
    }
    if(x==2002)
        cout<<"Acesso Permitido\n";

    
    return 0;
}
