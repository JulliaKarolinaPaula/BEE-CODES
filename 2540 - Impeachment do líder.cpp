#include <bits/stdc++.h>

using namespace std;

int main(){

    int jogadores, votos;
    double terco;
    //cin >> jogadores;

    while (cin >> jogadores){
        if(!jogadores) break;
        
    int parcial=0;

    terco = ((jogadores/3.0) * 2.0);

    for(int i = 0; i < jogadores; i++){
        cin >> votos;

        parcial+=votos;

    }
        if(parcial >= terco){
            cout << "impeachment" << endl;
        } else {
            cout << "acusacao arquivada" << endl;
        }
        
    }   
    return 0;
}