#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
  
   int N,h,f,t,tn,fv,tw,o,p;
   
   cin>>N;
   p=N;
   
   h=N/100;
   N=N%100;
   f=N/50;
   N=N%50;
   t=N/20;
   N=N%20;
   tn=N/10;
   N=N%10;
   fv=N/5;
   N=N%5;
   tw=N/2;
   N=N%2;
   o=N/1;

    cout<<p<<endl<<h<<" nota(s) de R$ 100,00\n"<<f<<" nota(s) de R$ 50,00\n"<<t<<" nota(s) de R$ 20,00\n"<<tn<<" nota(s) de R$ 10,00\n"<<fv<<" nota(s) de R$ 5,00\n"<<tw<<" nota(s) de R$ 2,00\n"<<o<<" nota(s) de R$ 1,00\n";
    return 0;
}

