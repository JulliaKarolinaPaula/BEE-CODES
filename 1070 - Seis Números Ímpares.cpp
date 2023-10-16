#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,vi;
    cin >> x;
    for(int i = 0;i<=5;i++){
         if(x%2 == 1){
            cout << x << endl;
            x += 2;}
        else if(x%2 == 0){
            vi = x + 1;
            x = vi;
            cout << x << endl;
            x += 2;}         

    }

    return 0;
}