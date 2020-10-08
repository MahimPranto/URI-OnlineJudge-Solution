#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

int main () 
{
    int sum = 0;

    for(int i=0;i<6; i++) {

        double temp; cin >> temp;

        if (temp > 0) sum++;

    }

    cout << sum << " valores positivos" << endl;


    return 0;
}


 
 
 
 
 
 
 
