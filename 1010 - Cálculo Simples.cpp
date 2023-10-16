#include <bits/stdc++.h>
using namespace std;

int main(){
    int cod1,cod2,num1,num2;
    double peca1, peca2,total;
    
    cin >> cod1 >> num1 >> peca1 >> cod2 >> num2 >> peca2;
   
    total = (num1*peca1)+(num2*peca2);
    cout << fixed << setprecision(2);

    cout << "VALOR A PAGAR: R$ " << total << endl;



    return 0;
}