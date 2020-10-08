#include <iostream>

using namespace std;

int main()
{
    int X,Y;
    cin>>X>>Y;
    
    while(X!=0 && Y!=0)
    {
        
        if(X>0 && Y>0)
        {
            cout<<"primeiro\n";
            cin>>X>>Y;
        }
        if(X>0 && Y<0)
        {
            cout<<"quarto\n";
            cin>>X>>Y;
        }
        if(X<0 && Y>0)
        {
            cout<<"segundo\n";
            cin>>X>>Y;
        }
        if(X<0 && Y<0)
        {
            cout<<"terceiro\n";
            cin>>X>>Y;
        }
    }
    return 0;
}
