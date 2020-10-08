#include <iostream>
#include<iomanip>

using namespace std;


int main()
{
    double A,B,C,temp,temp2;
    cin>>A>>B>>C;
    
    if(A>0 && B>0 && C>0)
    {
       if(A>B && A>C)
        {
            if(B>C)
                {
                    A=A;
                    B=B;
                    C=C;
                }
        }
        else if(B>A && B>C)
            {
                if(A>C)
                    {
                        temp=A;
                        A=B;
                        B=temp;
                    }
                else
                    {
                        temp=A;
                        temp2=B;
                        A=B;
                        B=C;
                        C=temp;
                    }
            }
     
        else if(C>A && C>B)
        {
            if(A>B)
            {
                temp=A;
                temp2=B;
                A=C;
                B=temp;
                C=temp2;
            }
            else
            {
                temp=A;
                A=C;
                C=temp;
            }
        }
    else if (A==B && B==C)
    {
        A=A;
        B=B;
        C=C;
    }
        
    if (A >= (B + C))  
        cout<<"NAO FORMA TRIANGULO\n";
    else
    {
    if( (A*A) == (B*B + C*C))
        cout<<"TRIANGULO RETANGULO\n";
    if( (A*A) > (B*B + C*C))
        cout<<"TRIANGULO OBTUSANGULO\n"; 
    if( (A*A) < (B*B + C*C))
        cout<<"TRIANGULO ACUTANGULO\n";
    if(A==B && B==C)
        cout<<"TRIANGULO EQUILATERO\n";
    if((A==B || B==C || A==C) && !(A==B && B==C))
        cout<<"TRIANGULO ISOSCELES\n";
   
    }   
    }
    
    return 0;
}

