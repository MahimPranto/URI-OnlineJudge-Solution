#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N,M,B;
    cin>>N>>M;
    
    while(N!=0 && M!=0)
    {
        B=M-N;
        if(B==7 || B==12 || B==22 || B==52 || B==102 || B==15|| B==25
            || B==55|| B==105 || B==30 || B==60 || B==110 || B==70 || B==120 || B==150)
            cout<<"possible\n";
        else 
            cout<<"impossible\n";
            
            
        cin>>N>>M;
    }
    
    return 0;

}
