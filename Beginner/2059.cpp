#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int p,j1,j2,r,a;
    cin>>p>>j1>>j2>>r>>a;
    
    if(p==0)
    {
        if((r==1 && a==0) || (r==0 && a==1))
            cout<<"Jogador 1 ganha!\n";
        else if(r==0 && a==0)
        {
            if((j1+j2)%2!=0)
                cout<<"Jogador 1 ganha!\n";
            else
                cout<<"Jogador 2 ganha!\n";
        }
        else if(r==1 && a==1)
            cout<<"Jogador 2 ganha!\n";
    }
    else if(p==1)
    {
        if((r==1 && a==0) || (r==0 && a==1))
            cout<<"Jogador 1 ganha!\n";
        else if(r==0 && a==0)
        {
            if((j1+j2)%2==0)
                cout<<"Jogador 1 ganha!\n";
            else
                cout<<"Jogador 2 ganha!\n";
        }
        else if(r==1 && a==1)
            cout<<"Jogador 2 ganha!\n";        
    }
    return 0;

}
