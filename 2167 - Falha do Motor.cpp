#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, posicao=0, rpm=0;

    cin >> n;

    int medidas[n];

    for(int i=0;i<n;i++){
      cin >> medidas[i];

      if(medidas[i]>=rpm){
        rpm = medidas[i];
      } else{
        posicao = i + 1;
        cout << posicao << endl;
        return 0;
      }
    }
    if(posicao == 0){
      cout << posicao << endl;
    }
    return 0;
}