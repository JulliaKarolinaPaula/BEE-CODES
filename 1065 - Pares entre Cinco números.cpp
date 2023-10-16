#include <bits/stdc++.h>
using namespace std;

int main(){
    int v[4], par=0;
    
    for(int i = 0;i<=5;i++){
      cin >> v[i];
        if(v[i]%2==0){
          par = par + 1;
        }
    }
    cout << par << " valores pares" << endl;

    return 0;
}