#include <bits/stdc++.h>
using namespace std;

int main(){
    int b,g,g1,t;

    cin >> b >> g;
    
    g1 = g/2;
    t = g1-b;

    if(g1 <= b){
        cout << "Amelia tem todas bolinhas!" << endl;
    } else {
        cout << "Faltam " << t << " bolinha(s)" << endl;
    } 


    return 0;
}