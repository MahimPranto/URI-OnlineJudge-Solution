#include <iostream>
#include<iomanip>

using namespace std;


int main()
{
    int A,B,D;
    cin>>A>>B;
    
    D=B-A;
    
    if(D<0)
        D=24+D;
    if(A==B)
        cout<<"O JOGO DUROU 24 HORA(S)\n";
    else
        cout<<"O JOGO DUROU "<<D<<" HORA(S)\n";
        
    return 0;
}

