#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    long long int N,f;
    cin>>N;
    
    if(N>=3 && N<=100000)
    {
        
        f= N*(N-3)/2;
        
        cout<<f<<endl;
    }
    
    return 0;
}
