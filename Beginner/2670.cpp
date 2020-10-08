#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int A1,A2,A3,T1,T2,T3;
	cin>>A1>>A2>>A3;
	
	int T[3];
	T[0]=(A2*2)+(A3*4);
    T[1]=(A1*2)+(A3*2);
    T[2]=(A2*2)+(A1*4);
    
    sort(T,T+3);
    
    cout<<T[0]<<endl;
 return 0;
}
