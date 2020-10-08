#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
  
   int age,year,month,days;
   
   cin>>age;
   
   year=age/365;
   age=age%365;
   
   month=age/30;
   age=age%30;
   
   cout<<year<<" ano(s)\n"<<month<<" mes(es)\n"<<age<<" dia(s)\n";
  
    return 0;
}
