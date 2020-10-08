#include <iostream>
#include<iomanip>

using namespace std;

int
main ()
{
  int n, h;
  float s,salary=1;
    cin >> n >> h >> s;
    
  
    salary=s*h;

  cout << "NUMBER = " <<n<< endl;
  cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;


  return 0;
}
