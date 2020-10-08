#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int T,PA,PB;
    double G1,G2;
    cin>>T;
    
    if(T>=1 && T<=3000)
    {
        for(int i=0;i<T;i++)
        {
            int C=0;
            
            cin>>PA>>PB;
            cin>>G1>>G2;
            
            while(PB>=PA)
            {
                PA=PA+((G1/100.0)*PA);
                PB=PB+((G2/100.0)*PB);
                
                C++;
            if(C>100)
            {
                cout<<"Mais de 1 seculo."<<endl;                
                break;
            }    
            }
            

            if(C<=100) 
                cout<<C<<" anos."<<endl;
            
        }

    }

    return 0;
}
