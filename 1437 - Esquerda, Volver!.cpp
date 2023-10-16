#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    char c, pontos[3];
   
    pontos[0] = 'N';
    pontos[1] = 'L';
    pontos[2] = 'S';
    pontos[3] = 'O';
    
    while(cin >> n){
      if(!n) return 0;
        i = 0;
        for(int j = 0;j < n;j++){
            cin >> c;
         if(c == 'D'){
             i += (i + 1)%4;
         } else if(c == 'E'){
             i += ((i - 1)+ 4) % 4;
         }
      cout << pontos[i] << endl;
     }
    }
   
    return 0;
}