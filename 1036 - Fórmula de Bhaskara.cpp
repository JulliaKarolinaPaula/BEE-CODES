#include <bits/stdc++.h><cmaath>
using namespace std;

int main(){
    double a,b,c;
    double delta,x, x1,x2;

    cin >> a >> b >> c;

    delta = pow(b,2)-4*a*c;
    if((delta < 0)||(a == 0)){
        cout << "Impossivel calcular" << endl;
    } else{
    
    x = sqrt(delta);
    x1 = (-b+x)/(2*a);
    x2 = (-b-x)/(2*a);
    cout << fixed << setprecision(5);
   
    cout << "R1 = " << x1 << endl;
    cout << "R2 = " << x2 << endl;
    }
   



    return 0;
}