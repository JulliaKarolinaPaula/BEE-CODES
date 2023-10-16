#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, a, b, c, soma, diferenca;

    cin >> m >> a >> b;
    
    soma = a + b;
    diferenca = m - soma;

    if((diferenca > a)&&(diferenca > b)){
        c = diferenca;
    } else if((a > diferenca)&&(a > b)){
        c = a;
    } else{
        c = b;
    }

    cout << c << endl;



    return 0;
}