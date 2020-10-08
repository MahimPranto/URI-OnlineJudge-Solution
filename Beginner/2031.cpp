#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin>>N;
    
    string A,B;
    
    for(int i=0;i<N;i++)
    {
        cin>>A;
        cin>>B;
        
        if(A=="ataque")
            {
                if(B=="ataque")
                    cout<<"Aniquilacao mutua\n";
                else 
                    cout<<"Jogador 1 venceu\n";
            }
        else if(A=="pedra")
            {
                if(B=="ataque")
                    cout<<"Jogador 2 venceu\n";
                else if(B=="pedra")
                    cout<<"Sem ganhador\n";
                else 
                    cout<<"Jogador 1 venceu\n";
            }        
        else if(A=="papel")
            {
                if(B=="papel")
                    cout<<"Ambos venceram\n";
                else 
                    cout<<"Jogador 2 venceu\n";
            }        
    }
    return 0;

} 
