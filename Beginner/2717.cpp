#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,A,B;
    cin>>N;
    cin>>A>>B;
    
    int sum=A+B;
    
    if(sum<=N)
        cout<<"Farei hoje!\n";
    else 
        cout<<"Deixa para amanha!\n";
        
    return 0;
}
