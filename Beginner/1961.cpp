#include <iostream>

using namespace std;

int main()
{
    int P,N,C=0,D,i;
    cin>>P>>N;
    
    int A[N];
    
    if((P>=1 && P<=5) && (N>=2 && N<=100))
    {   
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        D=A[0];
        for(i=1;i<N;i++)
        {
            if((A[i]-D)>=-P && (A[i]-D)<=P)
                C++;
            D=A[i];
        }
        
        if(C==N-1)
            cout<<"YOU WIN\n";
        else 
            cout<<"GAME OVER\n";
    
    }
    return 0;
}
