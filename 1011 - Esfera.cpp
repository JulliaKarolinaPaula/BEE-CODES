#include <bits/stdc++.h><math>
using namespace std;

int main (){
    double formula,quatro,pi,raio;
    quatro = (4.0/3);
    pi = 3.14159;

    cin >> raio;
    raio = pow(raio,3);
    formula = quatro * pi * raio;
    cout << fixed << setprecision(3);

    cout << "VOLUME = " << formula << endl;



    return 0;
}