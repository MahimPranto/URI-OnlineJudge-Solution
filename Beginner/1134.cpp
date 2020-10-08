#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choice;
    int a=0,g=0,d=0;
    
    cin>>choice;
    
    while(choice!=4)
    {
         
   
    if(choice==1)
            a++;
    if(choice==2)
            g++;
    if(choice==3)
            d++;
    
    cin>>choice;     
    }
    
    cout<<"MUITO OBRIGADO\nAlcool: "<<a<<"\nGasolina: "<<g<<"\nDiesel: "<<d<<endl;
    return 0;

}
