#include <bits/stdc++.h>
using namespace std;

int main(){
    int nota;

    cin >> nota;

    if(nota == 0){
        cout << "E" << endl;
    } if((nota > 0)&&(nota <= 35)){
        cout << "D" << endl;
    } if((nota > 35)&&(nota <= 60)){
        cout << "C" << endl;
    } if((nota > 60)&&(nota <= 85)){
        cout << "B" << endl;
    } if((nota > 85)&&(nota <= 100)){
        cout << "A" << endl;
    }
    return 0;
}