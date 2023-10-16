#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    unsigned long long sequencia = 0;
        cin >> n;

        for(int i = n;i >= 1;i--){
         double fibo, nacci, o;
         o = (1 + (sqrt(5))) / 2;
         fibo = (pow(o,i) - pow(1-o,i));
         nacci = sqrt(5);
         sequencia = round(fibo/nacci);

         cout << sequencia;
         if(i!=1) cout << " ";
        }
         
         cout << endl;

    return 0;
}