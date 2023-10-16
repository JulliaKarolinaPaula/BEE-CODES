#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, j1 = 0, j2 = 0;

    while(cin >> n){
       j1 = j2 = 0;
        if(n == 0) return 0;
            for(int i = 0;i<n;i++){
                cin >> a >> b;

            if(a > b){
                j1 += 1;
            } else if(a < b){
                j2 += 1;
            } else{
                j1 += 0;
                j2 += 0;
            }
        }
      
        cout << j1 << " " << j2 << endl;
    }

    return 0;
}