#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int P,Q,N;
    cin>>P;
    
    float sum=0;
    
    for(int i=0;i<P;i++)
    {
        cin>>N;
        cin>>Q;
        if(N==1001)
            sum+=(1.50*Q);
        else if(N==1002)
            sum+=(2.50*Q);
        else if(N==1003)
            sum+=(3.50*Q);
        else if(N==1004)
            sum+=(4.50*Q);
        else if(N==1005)
            sum+=(5.50*Q);
   
    }
    
    cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
