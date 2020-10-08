#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int N,X,Y;
    cin>>N;
    
    
    
    for(int i=0;i<N;i++)
    {
        int sum=0;
        int c=0;
        
        cin>>X>>Y;
        
        while(c!=Y)
        {
            if(X%2!=0)
            {
                sum+=X;
                
                c++;
            }  
            X++;
        }
        
        cout<<sum<<endl;
    }
    

    
    return 0;
}
