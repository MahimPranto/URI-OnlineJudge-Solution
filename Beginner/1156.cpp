#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float s=0;
    int d=1;
    
    for(int i=1;i<=39;i++)
    {
        s+=i/float(d);
        
        d*=2;
        i++;
    }
    
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
