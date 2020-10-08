#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    int fact=1;
    
    if(N>0 && N<13)
    {
    for(int i=1;i<=N;i++)
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}
