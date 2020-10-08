#include <iostream>

using namespace std;

int main()
{
    int C;
    cin>>C;
    
    string NAME;
    int F;
    
    for(int i=0;i<C;i++)
    {
        cin>>NAME>>F;
        
        if(NAME=="Thor")
            cout<<"Y\n";
        else
            cout<<"N\n";
        
        
    }

    return 0;
}
