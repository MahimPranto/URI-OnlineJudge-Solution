#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int M,D,Mf,Df;
    int A[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    
    while(cin>>M>>D)
    {
        if(cin.eof())
            break;
        else
        {
            if(M==12)
            {
                if(D==25)
                    cout<<"E natal!\n";
                else if(D>25)
                    cout<<"Ja passou!\n";
                else if(D==24)
                    cout<<"E vespera de natal!\n";
            }
            else
            {
                Df = A[M-1] -D;
            for(int i =M; i < 12; i++)
                Df+=A[i];
                
                cout<<"Faltam "<<Df<<" dias para o natal!\n";
            }
        }
    }
    return 0;

}
