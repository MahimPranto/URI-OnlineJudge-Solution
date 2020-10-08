#include <iostream>

using namespace std;

int main()
{
    int T,B,A1,D1,L1,A2,D2,L2;
    cin>>T;
    
    float V1,V2;
    
    for(int i=0;i<T;i++)
    {
        cin>>B;
        cin>>A1>>D1>>L1;
        cin>>A2>>D2>>L2;
        
        if(L1%2==0)
           V1=((A1+D1)/2.0)+B;
        else
            V1=(A1+D1)/2.0;
        
        if(L2%2==0)
           V2=((A2+D2)/2.0)+B;
        else
            V2=(A2+D2)/2.0;
            
        if(V1>V2)
            cout<<"Dabriel\n";
        else if(V1==V2)
            cout<<"Empate\n";
        else 
            cout<<"Guarte\n";
        
        
        
        
    }    
    return 0;
}
