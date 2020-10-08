#include<iostream>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int C=0;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]=='1')
            C++;
    }
    if(C%2==0)
        S=S+'0';
    else
        S=S+'1';
    cout<<S<<endl;
    return 0;
}
