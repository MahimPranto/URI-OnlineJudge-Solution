#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int M,P;
    cin>>M>>P;
    
    float C=M/float(P);
    
    cout<<fixed<<setprecision(2)<<C<<endl;
    return 0;
}
