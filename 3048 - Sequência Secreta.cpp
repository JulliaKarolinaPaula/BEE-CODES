#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,v,cont;

    cin >> n;
    for(int i = 0;i<=n;i++){
      cin >> v;
        if(v != v){
            cont = cont + 1;
        }
    }
    cout << cont << endl;

    return 0;
}