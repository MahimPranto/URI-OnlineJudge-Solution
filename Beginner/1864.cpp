#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    string A="LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    if(N>=1 && N<=34)
    {
        for(int i=0;i<N;i++)
        {
            cout<<A[i];    
            
        }
    }
    cout<<endl;
    return 0;
}
