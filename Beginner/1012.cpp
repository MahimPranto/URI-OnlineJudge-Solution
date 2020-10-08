#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double A,B,C,triangle,circle,trapezium,square,rec;
    cin>>A>>B>>C;

    triangle=(A/2)*C;
    circle=3.14159*C*C;
    trapezium=(.5*(A+B))*C;
    square=B*B;
    rec=A*B;
    

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<triangle<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<circle<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trapezium <<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<square<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rec<<endl;

    return 0;
}
