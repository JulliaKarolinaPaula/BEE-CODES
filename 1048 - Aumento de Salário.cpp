#include <bits/stdc++.h>
using namespace std;

int main(){
   double n=0,reajuste=0,novo=0;

   cin >> n;
    
    if(n <= 400.00){
        reajuste = n*0.15;
        novo = n + reajuste;
      cout << fixed << setprecision(2);
      cout << "Novo salario: " << novo << endl;
      cout << "Reajuste ganho: " << reajuste << endl;
      cout << "Em percentual: 15 %" << endl;
    } 
     if((n > 400.00)&&(n <= 800.00)){
        reajuste = n*0.12;
        novo = n + reajuste;
      cout << fixed << setprecision(2);  
      cout << "Novo salario: " << novo << endl;
      cout << "Reajuste ganho: " << reajuste << endl;
      cout << "Em percentual: 12 %" << endl;
    }
    if((n > 800.00)&&(n <= 1200.00)){
        reajuste = n*0.1;
        novo = n + reajuste;
      cout << fixed << setprecision(2);
      cout << "Novo salario: " << novo << endl;
      cout << "Reajuste ganho: " << reajuste << endl;
      cout << "Em percentual: 10 %" << endl;
    }
    if((n > 1200.00)&&(n <= 2000.00)){
        reajuste = n*0.07;
        novo = n + reajuste;
      cout << fixed << setprecision(2);
      cout << "Novo salario: " << novo << endl;
      cout << "Reajuste ganho: " << reajuste << endl;
      cout << "Em percentual: 7 %" << endl;
    }
    if(n > 2000.00){
        reajuste = n*0.04;
        novo = n + reajuste;
      cout << fixed << setprecision(2);
      cout << "Novo salario: " << novo << endl;
      cout << "Reajuste ganho: " << reajuste << endl;
      cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}