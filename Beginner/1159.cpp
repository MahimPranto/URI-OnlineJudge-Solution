#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int X;
    cin>>X;
    
    while(X!=0)
    {
        int sum=0;
        int c=0;
        
       while(c!=5)
       {
           if(X%2==0)
           {
               sum+=X;
               X++;
               c++;
           }
           else X++;
           
       }
       cout<<sum<<endl;
       
       cin>>X;
        
        
    }

    return 0;
}
