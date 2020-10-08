#include <iostream>
#include<cmath>

using namespace std;

int
main ()
{
  int A, B, C,d,e;

  while (cin >> A >> B >> C)
    {

      if (A == 0 )
	break;
      else if ((A > 0 && A <= 1000) && (B > 0 && B <= 1000)	 && (C > 0 && C <= 1000))
	    {
            d=(A*B*100)/C;
            e=pow(d,.5);
	        
	        cout<<e<<endl;

        }
    }
  return 0;
}
