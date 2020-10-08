#include <iostream>

using namespace std;

int main()
{
    int X,Z,C=0;
    cin>>X;
    cin>>Z;
    int sum=X;
    while(X>=Z)
    {
        
        cin>>Z;
        
    }
    if(Z>X)
    {
        C++;
       while(Z>=sum)
       {
           
           X=X+1;
           sum=sum+X;
           C++;
           
       }
        
    }
    
    cout<<C<<endl;
    return 0;
}
