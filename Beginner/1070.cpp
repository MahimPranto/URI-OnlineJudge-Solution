#include <iostream>

using namespace std;

int main()
{
    int X,c=0;
    cin>>X;
    
    
    for(int i=X;;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            c++;
        }
        if(c==6)
            break;
        
    }
    return 0;
}
