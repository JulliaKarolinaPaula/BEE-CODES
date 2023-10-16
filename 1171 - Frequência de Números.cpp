#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    int numeros[n], compara[n], cont[n], aparece[n];

    for(int i = 0;i < n;i++){
        cin >> numeros[i];
    }
    for(int i = 0;i < n;i++){
        compara[i] = numeros[i];
        for(int j = 0;j < n;j++){
            if(numeros[i] == compara[j]){
                aparece[j] = numeros[i];
                numeros[j] = 0;
                cont[j] += 1;
            }
        }
    }
    for(int i = 0;i < n;i++){
        if(compara[i] != 0){
             cout << aparece[i] << " aparece " << cont[i] << " vez(es)" << endl;
        }
    }

    return 0;
}