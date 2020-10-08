#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int S,T,F;
    cin>>S>>T>>F;
    
    if((S+T+F)>=24)
        cout<<(S+T+F)-24<<endl;    
    else if((S+T+F)<0)
        cout<<24+(S+T+F)<<endl;
    else 
        cout<<(S+T+F)<<endl;
    
    return 0;

}
