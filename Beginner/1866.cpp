#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int C,N;
    cin>>C;
    
    for(int i=0;i<C;i++)
    {
        int sum=0;
        cin>>N;
        
        if(N>=1 && N<=1000)
        {
            for(int j=1;j<=N;j++)
            {
                if(j%2!=0)
                    sum+=1;
                else
                    sum-=1;
            }
        
        }
        cout<<sum<<endl;
    }
    return 0;
}
