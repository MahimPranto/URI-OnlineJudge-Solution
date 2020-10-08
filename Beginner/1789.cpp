#include <iostream>
#include<cmath>

using namespace std;

int main ()
{
    int L,V;
    
    while(cin>>L)
    {
        int max=0;
        if(cin.eof())
            break;
        else
            {
               for(int i=0;i<L;i++)
               {
                  cin>>V;
                  
                  if(V>max)
                    max=V;
                   
               }
                if(max<10)
                    cout<<"1"<<endl;
                else if(max>=10 && max<20)
                    cout<<"2\n";
                else if(max>-20)
                    cout<<"3\n";
                
            }
        
    }
  return 0;
}
