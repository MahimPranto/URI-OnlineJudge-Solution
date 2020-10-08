#include <iostream>
using namespace std;

int main()
{
  
   int s,h,m,ss,sp;
   
   cin>>s;
   sp=s;
   h=s/3600;
   s=s%3600;
   m=s/60;
   s=s%60;
   
   cout<<h<<":"<<m<<":"<<s<<endl;

    return 0;
}
