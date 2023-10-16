#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cin >> n;
    for(int i = 0;i<n;i++){
      int valor;
        cin >> valor;
        if((valor > 0)&&(valor%2 == 0)){
            cout << "EVEN POSITIVE" << endl;
        } if((valor > 0)&&(valor%2 != 0)){
            cout << "ODD POSITIVE" << endl;
        } if((valor < 0)&&(valor%2 == 0)){
            cout << "EVEN NEGATIVE" << endl;
        } if((valor < 0)&&(valor%2 != 0)){
            cout << "ODD NEGATIVE" << endl;
        } if(valor == 0){
            cout << "NULL" << endl;
        }
    }

    return 0;
}