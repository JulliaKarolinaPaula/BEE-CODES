#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,d,e,acertos;
    
    cin >> t >> a >> b >> c >> d >> e;
    if(a == t){
        acertos = acertos + 1;
    } if(b == t){
        acertos = acertos + 1;
    } if(c == t){
        acertos = acertos + 1;
    } if(d == t){
        acertos = acertos + 1;
    } else if(e == t){
        acertos = acertos + 1;
    }
    cout << acertos << endl;



    return 0;
}