#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int c=0;
    double a[10], avg=0;
    for(int i=0; i<6; i++)
        cin >> a[i];
    for(int i=0; i<6; i++)
    {
        if(a[i]>0)
        {
            c++;
            avg += a[i];
        }
    }
    cout << c << " valores positivos" << endl;
    cout << setprecision(1) << fixed << avg/c << endl;

    
    return 0;
}
