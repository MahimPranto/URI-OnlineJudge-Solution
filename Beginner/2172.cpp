#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    long long int X,M,E;
    cin>>X>>M;
    
    while(X!=0 && M!=0)
    {
        E=X*M;
        cout<<E<<endl;
        
        cin>>X>>M;
        
    }

    return 0;
}
