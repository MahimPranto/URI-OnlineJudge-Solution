#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int N,X;
    cin>>N;
    
    if(N>=1 && N<=100)
    {
        for(int i=0;i<N;i++)
        {
            cin>>X;
            
            int sum=0;
            
            for(int j=1; j<X;j++)
            {
                if(X%j==0)
                    sum+=j;
                
            }
            if(sum==X)
                cout<<X<<" eh perfeito"<<endl;
            else 
                cout<<X<<" nao eh perfeito"<<endl;
        
        }
        
    }
    return 0;
}
