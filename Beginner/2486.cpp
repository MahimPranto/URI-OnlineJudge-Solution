#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,F;
    string A;
    
    while(cin>>T)
    {
        int sum=0;

        if(T==0)
            break;
        for(int i=0;i<T;i++)
        {
            cin>>F;
            cin.ignore();
            getline(cin,A);
            
            if(A=="suco de laranja")
                sum+=(F*120);
            else if(A=="morango fresco" || A=="mamao" )
                sum+=(F*85);
            else if(A=="goiaba vermelha")
                sum+=(F*70);
            else if(A=="manga")
                sum+=(F*56);
            else if(A=="laranja")
                sum+=(F*50);
            else if(A=="brocolis")
                sum+=(F*34);
        }
            if(sum<110)
                cout<<"Mais "<<110-sum<<" mg\n";
            else if(sum>130)
                cout<<"Menos "<<sum-130<<" mg\n";
            else 
                cout<<sum<<" mg\n";
    }
    return 0;
}
