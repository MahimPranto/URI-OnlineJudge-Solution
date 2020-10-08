#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,Q;
    
    while(cin>>N>>Q)
    {
        if(cin.eof())
            break;
        
        int A[N];
        int B[Q];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N,greater<int>());
        for(int j=0;j<Q;j++)
        {
            cin>>B[j];
        }
        for(int i=0;i<Q;i++)
        {
            cout<<A[B[i]-1]<<endl;
        }   
    }
    
    return 0;
}
