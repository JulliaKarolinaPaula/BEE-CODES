#include <bits/stdc++.h>
using namespace std;

int main(){
    int hi, mi, hf, mf, instanteInicial, instanteFinal, duracao, duracaoHoras, duracaoMinutos;

    cin >> hi >> mi >> hf >> mf;
    
    instanteInicial = (hi*60)+mi;
    instanteFinal = (hf*60)+mf;

    if(instanteInicial < instanteFinal){
        duracao = instanteFinal - instanteInicial;
    } else{
        duracao = (24*60 - instanteInicial) + instanteFinal;
    }

    duracaoHoras = duracao / 60;
    duracaoMinutos = duracao % 60;

    cout << "O JOGO DUROU " << duracaoHoras << "HORA(S) E " << duracaoMinutos << "MINUTO(S)" << endl;


    return 0;
}