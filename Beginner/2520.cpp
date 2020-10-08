#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,M;
    
    while(cin>>N>>M)
    {
        int M1,M2,Y1,Y2;
        int F;
        if(cin.eof())
            break;
        int A[N][M];
        
        for(int i=0; i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                cin>>A[i][j];
                if(A[i][j]==1)
                {
                    M1=i;
                    M2=j;
                }
                if(A[i][j]==2)
                {
                    Y1=i;
                    Y2=j;
                }
            }
        }

        F=abs(Y1-M1)+abs(Y2-M2);
            cout<<F<<endl;
    }
    return 0;
}
