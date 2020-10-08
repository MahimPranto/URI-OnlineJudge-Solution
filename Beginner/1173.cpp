#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int N[10],V;
    
    cin>>V;
    
    for(int i=0;i<10;i++)
    {
        N[i]=V;
        
        V=V*2;
            
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
        
    return 0;
}
