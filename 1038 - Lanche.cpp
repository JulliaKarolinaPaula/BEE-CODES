#include <bits/stdc++.h>
using namespace std;

int main(){
    int cod,qtd;
    double cq,xs,xb,ts,re;

    cin >> cod >> qtd;
    switch(cod){
        case 1 :
         cq = qtd*4.00;
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << cq << endl;
        break;
        case 2:
         xs = qtd*4.50;
         cout << fixed << setprecision(2);
         cout << "Total: R$ " << xs << endl;
         break;
        case 3:
         xb = qtd*5.00;
         cout << fixed << setprecision(2);
         cout << "Total: R$ " << xb << endl;
         break;
        case 4:
         ts = qtd*2.00;
         cout << fixed << setprecision(2);
         cout << "Total: R$ " << ts << endl;
         break;
        case 5:
         re = qtd*1.50;
         cout << fixed << setprecision(2);
         cout << "Total: R$ " << re << endl;
        break;
    }

    return 0;
}