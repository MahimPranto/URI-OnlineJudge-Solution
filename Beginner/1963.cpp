#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double A,B,C;
	while(cin>>A>>B)
	{
		C=B-A;
		C=C/A*100;
		cout<<fixed<<setprecision(2)<<C<<"%\n";
	}
	return 0;
}
