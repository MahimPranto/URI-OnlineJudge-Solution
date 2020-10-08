#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int N,M,P;
    float NOTE,max=0;
    cin>>N;
    
    int A[N];
    float B[N];
    
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        cin>>B[i];
        
        if(B[i]>max)
        {
            max=B[i];
    
           P=i; 
        }
    }
        if(max>=8)
            cout<<A[P]<<endl;
        else
            cout<<"Minimum note not reached\n";
            
    
    
	return 0;
}
