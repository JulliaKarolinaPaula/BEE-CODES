#include <bits/stdc++.h><cmaath>
using namespace std;

int main (){
    double tempo,velocidade,distancia,gasto;
   //12 km/l
    cin >> tempo >> velocidade;

    distancia = tempo*velocidade;
    gasto = distancia/12;
    cout << fixed << setprecision(3);

    cout << gasto << endl;


    return 0;
}