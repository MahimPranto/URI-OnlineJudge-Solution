#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
    float N[12][12],avg;
    string T;
    int L,sum=0;
    
    cin>>L>>T;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
            cin>>N[i][j];
    }
    
    for(int i=0;i<12;i++)
    {
        sum+=N[i][L];
        
    }       
    if(T=="S")
        cout<<sum<<endl;
    else if(T=="M")
        cout<<fixed<<setprecision(1)<<sum/12.0<<endl;
    
    return 0;
}
