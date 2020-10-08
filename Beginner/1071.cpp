#include <iostream>

using namespace std;

int main()
{
    int X,Y,c=0;
    cin>>X>>Y;
    
    
    for(int i=X-1;i>Y;i--)
    {
        if(i%2!=0)
        {
            c=c+i;
        }
    }
    
    cout<<c<<endl;
    
    return 0;
}
