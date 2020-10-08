#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    long long C;
    cin>>C;
    
    int r;
    
    while(C!=0)
    {
        r=C%10llu;
        C=C/10;
        
        cout<<r;
    }
    cout<<endl;
	return 0;
}
