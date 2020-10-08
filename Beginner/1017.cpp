#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
  
   int h,s;
   float fuel;
   
   cin>>h>>s;
   
   fuel=(s/12.0)*h;
   
   cout<<fixed<<setprecision(3)<<fuel<<endl;
    
    return 0;
}
