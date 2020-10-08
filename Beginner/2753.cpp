#include<bits/stdc++.h>

using namespace std;

int main()
{
	int A[26],N=97;
	char B='a';
	for(int i=0;i<26;i++)
    {
        A[i]=N;
        N++;
        
        cout<<A[i]<<" e "<<B<<endl;
        B++;
    }
    
    
    return 0;
}
