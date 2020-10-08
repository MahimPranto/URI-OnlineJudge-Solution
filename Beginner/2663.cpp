#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int N,K;
	cin>>N>>K;
	
	int A[N];
	for(int i=0;i<N;i++)
	{
	   cin>>A[i];
	    
	}
    sort(A,A+N,greater<int>());
    int C=0;
    for(int i=0;i<N;i++)
	{
	    C++;
        if(C==K)
        {
            for(int j=i+1;j<N;j++)
            {
                if(A[i]!=A[j])
                    break;
                C++;
            }
            break;
        }
	    
	}
    cout<<C<<endl;
 return 0;
}
