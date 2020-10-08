#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float N1,N2,N3,N4,N5,total,avg,avg2;
    
    cin>>N1>>N2>>N3>>N4;
    
    total=(N1*2)+(N2*3)+(N3*4)+(N4*1);
    avg=total/10.0;
    
    if(avg>=7)
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl<<"Aluno aprovado.\n";
    
    else if(avg<5)
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl<<"Aluno reprovado.\n";
    
    else if(avg>=5 && avg <=6.9)
    {
        cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl<<"Aluno em exame.\n";
        
        cin>>N5;
        
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<N5<<endl;
        
        avg2=(avg+N5)/2.0;
        
        if(avg>=5)
            cout<<"Aluno aprovado.\n"<<"Media final: "<<fixed<<setprecision(1)<<avg2<<endl;
    
        else if(avg<=4.9)
        cout<<"Aluno reprovado.\n"<<"Media final: "<<fixed<<setprecision(1)<<avg2<<endl;
        
        
    
    }
    return 0;
}
