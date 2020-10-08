#include <iostream>
#include<cmath>

using namespace std;

int main (int argc, const char * argv[])
{
    int N;
    
    while(cin>>N)
    {
        if(N>=0 && N<=100)
        {
            if(N==0)
                cout<<"vai ter copa!\n";
            else 
                cout<<"vai ter duas!\n";
            
        }
    }



  return 0;
}
