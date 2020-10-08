#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N,L,t=0,tr=0,f=0,fv=0;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>L;
        
        if(L%2==0)
            t++;
        if(L%3==0)
            tr++;
        if(L%4==0)
            f++;
        if(L%5==0)
            fv++;
    }
    
    cout<<t<<" Multiplo(s) de 2\n"<<tr<<" Multiplo(s) de 3\n"<<f<<" Multiplo(s) de 4\n"<<fv<<" Multiplo(s) de 5\n";
    return 0;

}
