#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    double valor1, valor2, valor3, media;

    cin >> n;
    for(int i = 0;i<n;i++){
       cin >> valor1 >> valor2 >> valor3;
        
        media = ((valor1*2 + valor2*3 + valor3*5)/(2+3+5));
       
       cout << fixed << setprecision(1);
       cout << media << endl;
    }

    return 0;
}