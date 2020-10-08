#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    
    if(A+B>C && B+C>A && C+A>B)
    {
        if(A==B && B==C)
            cout<<"Valido-Equilatero\nRetangulo: N\n";
        else if((A==B && B!=C) || (B==C && C!=A) || (C==A && A!=B))
        {
            cout<<"Valido-Isoceles\nRetangulo: ";
            
            if((A*A+B*B==C*C) || (A*A==B*B+C*C) || (A*A+C*C==B*B))
                cout<<"Y\n";
            else 
                cout<<"N\n";
        }
        else 
        {
            cout<<"Valido-Escaleno\nRetangulo: ";
            
            if((A*A+B*B==C*C) || (A*A==B*B+C*C) || (A*A+C*C==B*B))
                cout<<"S\n";
            else 
                cout<<"N\n";            
        }
        
    }
    else
        cout<<"Invalido\n";
    return 0;
}
