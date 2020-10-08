#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    
    while(cin>>N)
    {
        if(cin.eof())
            break;
        else
        {
            if(N>=1001 && N<= 9999)
                cout<<N-1<<endl;    
            
        }    
    }
    
    return 0;

}
