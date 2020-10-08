#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    string A;
    float S[7],max=0.0, min=15.0;
    float D;
    
    for(int i=0;i<N;i++)
    {
        cin>>A;
        cin>>D;
        
        float sum=0.0;
        
        for(int j=0;j<7;j++)
        {
            cin>>S[j];
     
            sum+=S[j];
        }
        sort(S,S+7);
        sum=((sum-S[0])-S[6])*D;
        
        
        cout<<A<<" "<<fixed<<setprecision(2)<<sum<<endl;
   
    }
    return 0;
}
