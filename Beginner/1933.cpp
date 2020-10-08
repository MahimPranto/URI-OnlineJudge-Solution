#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    
    if((A>=1 && A<=13) && (B>=1 && B<=13))
    {
        if(A==B)
            cout<<A<<endl;
        else if(A>B)
            cout<<A<<endl;
        else if(B>A)
            cout<<B<<endl;
        
        
    }

    return 0;
}
