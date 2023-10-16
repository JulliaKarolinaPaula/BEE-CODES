#include <bits/stdc++.h>
using namespace std;

int main(){
    double v[5],med;
    int pos;
    for(int i = 0;i<=6;i++){
        cin >> v[i];
          if(v[i]>0){
            pos = pos + 1;
          }
        med = (v[0]+v[1]+v[2]+v[3]+v[4]+v[5])/5;
    }
      cout << pos << " valores positivos" << endl;
      cout << med << endl;
    return 0;
}