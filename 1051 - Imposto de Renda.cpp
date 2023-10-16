#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, ir;

    cin >> n;

    if ((n >= 0) && (n <= 2000.00)){
        cout << "Isento" << endl;
    }

    if ((n > 2000.01) && (n <= 3000.00)) {
        ir = 999.99 + (n * 0.08);
        cout << fixed << setprecision(2);
        cout << "R$ " << ir << endl;
    }


    if ((n > 3000.01) && (n <= 4500.00)){
        ir = (1000 * 0.08) + ((n - 3000) * 0.18);
        cout << fixed << setprecision(2);
        cout << "R$ " << ir << endl;
    }

    if (n > 4500.00){
        ir = (1000 * 0.08) + (1500 * 0.18) + ((n - 4500) * 0.28);
        cout << fixed << setprecision(2);
        cout << "R$ " << ir << endl;
    }

    return 0;
}