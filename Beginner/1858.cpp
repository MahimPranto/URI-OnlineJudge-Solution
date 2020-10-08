#include <iostream>
using namespace std;

int main() 
{
    int n, t, i, index, lowest = 50;

    cin >> n;

    for (i = 1; i <= n; i++) 
    {
        cin >> t;

        if (t < lowest) 
        {
            lowest = t;
            index = i;
        }
    }

    cout << index <<endl;

    return 0;
}
