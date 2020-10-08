#include <iostream>

using namespace std;

int main()
{
    int N,i;
    cin>>N;
    
    int X[N];
    
    int low =X[0];
   
    for(i=0;i<N;i++)
    {
        cin>>X[i];
        
        if(X[i]<low)
        {
            low=X[i];
        }
    }

    cout<<"Menor valor: "<<low<<endl;
    
    for(i=0;i<N;i++)
    {
        if(X[i]==low)
            cout<<"Posicao: "<<i<<endl;
    }
    
    return 0;
}
