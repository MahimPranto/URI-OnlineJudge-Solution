#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,R,G,B,F;
    cin>>T;
    
    string str;
    
    for(int i=0;i<T;i++)
    {
        cin>>str;
        cin>>R>>G>>B;
        
        if(str=="eye")
        {
            F=(R*0.3)+(G*.59)+(B*.11);
            cout<<"Caso #"<<i+1<<": "<<F<<endl;    
            
        }
        else if(str=="min")
        {
            F=min(R,min(G,B));
            cout<<"Caso #"<<i+1<<": "<<F<<endl;
        
        }
        else if(str=="max")
        {
            F=max(R,max(G,B));
            cout<<"Caso #"<<i+1<<": "<<F<<endl;
        
        }
        else if(str=="mean")
        {
            F=(R+G+B)/3; 
            cout<<"Caso #"<<i+1<<": "<<F<<endl;
        }
    }
    
    return 0;
}
