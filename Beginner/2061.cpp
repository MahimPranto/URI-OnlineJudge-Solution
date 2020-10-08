#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    
    int C=N;
    string A;
    
    if(N>0 && M<500)
    {
        for(int i=0;i<M;i++)
        {
            cin>>A;
        
            if(A=="fechou")
                C++;
            else if(A=="clicou")
                C--;
        }
    }
    cout<<C<<endl;
    return 0;

}
