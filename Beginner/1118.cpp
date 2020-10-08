#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

    float A=-1,B=-1;

    int X=1;
 
    while(X == 1)
    {
        do{
            cin >> A;

            if(A< 0 || A > 10)
                cout << "nota invalida" << endl;

        }while(A < 0 || A> 10);

        do{
            cin >> B;

            if(B< 0 || B> 10)
                cout << "nota invalida" << endl;

        }while(B < 0 || B > 10);

        cout << "media = " << fixed << setprecision(2) << ((A + B) / 2) << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)" << endl;

            cin >> X;

        }while(X != 1 && X != 2);

    }
    return 0;

}
