#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int N,S,B,A,S1,B1,A1;
    cin>>N;
    string U;
    
    float Sc=0.0,Bc=0.0,Ac=0.0,S1c=0.0,B1c=0.0,A1c=0.0;
    float SP,BP,AP;
    for(int i=0;i<N;i++)
    {
        cin>>U;
        cin>>S>>B>>A;
        cin>>S1>>B1>>A1;
        
        Sc+=S; Bc+=B; Ac+=A; S1c+=S1;B1c+=B1;A1c+=A1;
        
    }
    
    SP=(100/Sc)*S1c;
    BP=(100/Bc)*B1c;
    AP=(100/Ac)*A1c;
    
    cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<SP<<" %.\n";
    cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<BP<<" %.\n";
    cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<AP<<" %.\n";
    
    return 0;
}
