#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;
    
    double min,max;
    
    min=N/log(N);
    max=min*1.25506;
    
    cout<<fixed<<setprecision(1)<<min<<" "<<fixed<<setprecision(1)<<max<<endl;
    
    return 0;

}
