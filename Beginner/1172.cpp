#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int X[10];
    int C=0,i=0;
    
    while (C!=10)
    {
        cin>>X[i];
        
        if(X[i]>0)
        {
            cout<<"X["<<i<<"] = "<<X[i]<<endl;
        
            i++;
            C++;
        }
        else
        {
            X[i]=1;
        
            cout<<"X["<<i<<"] = "<<X[i]<<endl;
        
            i++;
            C++;            
        }
    }
    return 0;
}
