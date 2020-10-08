#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a;
    while(cin>>a)
    {
        int n;
        cin>>n;
        int t;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            cout<<a[t-1];
        }
        cout<<endl;
    }
    return 0;
}
