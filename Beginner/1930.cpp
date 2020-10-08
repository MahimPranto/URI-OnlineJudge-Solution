#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if((A>=2 && A<=6) && (B>=2 && B<=6) && (C>=2 && C<=6) && (D>=2 && D<=6))
    {
        cout<<(A+B+C+D)-3<<endl;
        
    }

    return 0;
}
