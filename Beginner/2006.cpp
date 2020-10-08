#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int T,A,B,P,D,E;
    int C=0;
    
    cin>>T;
    cin>>A>>B>>P>>D>>E;
    
    if(A==T)
        C++;
    if(B==T)
        C++;
    if(P==T)
        C++;
    if(D==T)
        C++;
    if(E==T)
        C++;
        
        cout<<C<<endl;
	return 0;
}
