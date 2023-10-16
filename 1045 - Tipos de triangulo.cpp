#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    double a=0,b=0,c=0,a2=0,b2=0,c2=0;
    cin >> a >> b >> c;
    a2 = pow(a,2);
    b2 = pow(b,2);
    c2 = pow(c,2);
   
      if(a >= (b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }  if(a2 == (b2+c2)){
        cout << "TRIANGULO RETANGULO" << endl;
    }  if(a2 > (b2+c2)){
        cout << "TRIANGULO OBTUSANGULO" <<endl;
    }  if(a2 < (b2+c2)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }  if((a==b)&&(a==c)&&(b==c)){
            cout << "TRIANGULO EQUILATERO" << endl;
    }  if((a==b)||(a==c)||(b==c)){
            cout << "TRIANGULO ISOSCELES" << endl;
    }



    return 0;
}