#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int N,sum=0,c=0;
    
    float avg;
    
    while(true)
    {
        cin>>N;
        
        if(N<0)
            break;
        else
        {
            sum+=N;
            c++;
        }
        
    }
    avg=sum/float(c);
    
    cout<<fixed<<setprecision(2)<<avg<<endl;
    return 0;
}
