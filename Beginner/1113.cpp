#include <iostream>

using namespace std;

int main()
{
    int X,Y;
    
    cin>>X>>Y;
    
    while(X!=Y)
    {
        
        if(X<Y)
            cout<<"Crescente\n";
        else
            cout<<"Decrescente\n";
        
        cin>>X>>Y;
    }

    
    return 0;
}
