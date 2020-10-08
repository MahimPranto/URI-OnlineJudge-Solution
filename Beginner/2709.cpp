#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,M;
    int C=0;
    
    while(cin>>N)
    {
        int sum;
        int A[N];

        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        cin>>M;
        sum=0;
        for(int i=N-1;i>=0;i-=M)
        {
            sum+=A[i];
            
        }
        if(sum==0 || sum==1)
            cout<<"Bad boy! I’ll hit you.\n";
        else if(sum==2 || sum==3)
        {
            cout<<"You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
            C=1;
        }
        else if(sum%2==0)
            cout<<"Bad boy! I’ll hit you.\n";
        else 
        {
            int i;
            for(i=2;i<sum/2;i++)
            {
                if(sum%i==0)
                {
                    cout<<"Bad boy! I’ll hit you.\n";
                    break;
                }

            }
            if(i==sum/2)
            {
                cout<<"You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
                C=1;
            }    
        }
        if(C==1)
            break;
    }
    
    return 0;
}
