#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    long long int N,L,P;
    cin>>N>>L;
    
    if(N>=3 && N<=1000000)
    {
        if(L>=1 && L<=4000)
           
           {
               P=N*L;
               cout<<P<<endl;
            }
    }
    return 0;
}
