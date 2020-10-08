#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    
    if(A==B || B==C || A==C)
        cout<<"S\n";
    else if(A+B==C || B+C==A || A+C==B)
        cout<<"S\n";
    else
        cout<<"N\n";
    return 0;
}
