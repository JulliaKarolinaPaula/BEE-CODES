#include <bits/stdc++.h>
using namespace std;

int main(){
    int hi,hf,duracao, inicio, fim, time;
    
    cin >> hi >> hf;

    inicio = hi*60;
    fim = hf*60;

    if(inicio < fim){
        duracao = (fim-inicio) / 60;
    } else{
        time = (24*60 - inicio) + fim;
        duracao = time/60;
    }
    
    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl; 

    return 0;
}