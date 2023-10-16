#include <bits/stdc++.h>
using namespace std;

int main(){
    int competidores, papelespecial, numfolhas, totalpapel;

    cin >> competidores >> papelespecial >> numfolhas;

    totalpapel = competidores * numfolhas;

    if(totalpapel > papelespecial){
        cout << "N" << endl;
    } else{
        cout << "S" << endl;
    }



    return 0;
}