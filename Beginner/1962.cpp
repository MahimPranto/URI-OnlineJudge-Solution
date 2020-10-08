#include <iostream>

using namespace std;

int main()
{
    int N,T,A;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>A;
        
        if(A>2015)
        {   
            T=A-2015;
            cout<<T+1<<" A.C.\n";
        }
        else if(A<2015)
        {
            T=2015-A;
            cout<<T<<" D.C.\n";
        }
        else 
            cout<<"1 A.C.\n";
        
        
    }
    return 0;
}
