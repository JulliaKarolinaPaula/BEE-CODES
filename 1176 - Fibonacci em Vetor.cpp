#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin >> t;

    int fibonacci[t]; 
    unsigned long long sequencia = 0;
    for(int i = 0;i < t;i++){
        cin >> fibonacci[i];

        if(fibonacci[i]==0){
            sequencia = 0;
        } else if(fibonacci[i] == 1){
            sequencia = 1;
        } else if(fibonacci[i] == 2){
            sequencia = 1;
        } else {
        double fibo, nacci, o;
        o = (1 + (sqrt(5))) / 2;
         fibo = (pow(o,fibonacci[i]) - pow(1-o,fibonacci[i]));
         nacci = sqrt(5);
         sequencia = round(fibo/nacci);
        
        }
        cout << "Fib (" << fibonacci[i] << ") = " << sequencia << endl;
    }



  return 0;
}