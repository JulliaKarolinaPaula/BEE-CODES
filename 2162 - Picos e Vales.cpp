#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, pv = 1, difer=0;

    cin >> n;
    int altura[n];

    for(int i = 0;i < n;i++){
        cin >> altura[i];
    }
    for(int i = 0;i < n;i++){
        difer = altura[i-1];
      if(altura[i]==difer){
          pv = 0;
          cout << pv << endl;
          return 0;
      } else if(altura[i]>difer){
          if(difer>=altura[i-2]){
            pv = 0;
          } else {
             pv = 1;
          }
        } else {
           if(difer<=altura[i-2]){
            pv = 0;
          } else {
             pv = 1;
          }
         }  
      }
    
    cout << pv << endl;
    return 0;
}