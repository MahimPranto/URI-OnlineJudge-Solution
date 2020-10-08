#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X[100];
    
    for(int i=0; i<100; i++)
        cin>>X[i];
    
    int high=X[0];
    
    for(int i=0; i<100; i++)
    {
        if(X[i]>high)
            high=X[i];
    }
    
    cout<<high<<endl;
    
    for(int i=0; i<100; i++)
    {
       if(X[i]==high)
        cout<<i+1<<endl;
        
    }
    
    
    
 return 0;
}
