#include <iostream>

using namespace std;

int main()
{
    int N,ci=0,co=0;
    cin>>N;
    int X[N];
    
    for(int i=0;i<N;i++)
    {
        cin>>X[i];
        
    }
    for(int i=0;i<N;i++)
    {
        if(X[i]>=10 && X[i]<=20)
            ci++;
        else
            co++;
    }   
    
    cout<<ci<<" in\n"<<co<<" out\n";
    return 0;
}
