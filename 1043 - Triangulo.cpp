#include <bits/stdc++.h>
using namespace std;

int main(){
    double a=0,b=0,c=0,perimetro=0,area=0;
    

    cin >> a >> b >> c;

    if((a<(b+c))&&(b<(a+c))&&(c<(a+b))){
     perimetro = a + b + c;
     cout << fixed << setprecision(1);
     cout << "Perimetro = " << perimetro << endl;
    } else{
      area = ((a+b)*c)/2;
     cout << fixed << setprecision(1);
     cout << "Area = " << area << endl;
    }



    return 0;
}