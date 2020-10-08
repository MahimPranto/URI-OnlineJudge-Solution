#include<bits/stdc++.h>

using namespace std;

int main()
{
    string A;
    int N;
    
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>A;
        int C=0,P=0;
    
        if(A.length()==8)
        {
            for(int i=0;i<3;i++)
            {
             if(A[i]>=65 && A[i]<=90)
                C++;
            }
            if(C==3)
            {
                if(A[3]==45)
                {
                    for(int j=4;j<8;j++)
                    {
                        if(A[j]>=48 && A[j]<=57)
                            P++;
                    }
                    if(P==4)
                    {
                        if(A[7]==49 || A[7]==50)
                            cout<<"MONDAY\n";
                        else if(A[7]==51 || A[7]==52)
                            cout<<"TUESDAY\n";
                        else if(A[7]==53 || A[7]==54)
                            cout<<"WEDNESDAY\n";
                        else if(A[7]==55 || A[7]==56)
                            cout<<"THURSDAY\n";
                        else if(A[7]==48 || A[7]==57)
                            cout<<"FRIDAY\n";
                    }
                    else
                        cout<<"FAILURE\n";
                }
                else 
                    cout<<"FAILURE\n";
            }
            else
                cout<<"FAILURE\n";
        }
        else 
            cout<<"FAILURE\n";
    }
    return 0;
}
