#include <iostream>
#include<iomanip>
using namespace std;

int
main ()
{
  float A, B, C, avg;
    cin >> A >> B >> C;
    
  A = A * 2;
  B = B * 3;
  C = C * 5;

  avg = (A + B + C) / 10;

  cout << "MEDIA = " << fixed << setprecision (1) << avg << endl;


  return 0;
}
