#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int I=1;
    int J=60;
    
    for(int i=J; i>=0; i-=5 )
    {
        cout<<"I="<<I<<" J="<<i<<endl;
        
        I+=3;
        
    }
    
    
 return 0;
}
