#include <bits/stdc++.h>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    int n, p;

    cin >> n;
     for(int i = 1;i <= n;i++){
        if(i%2 == 0){
            p = pow(i,2);
           cout << i << "^2 = " << p << endl; 
        }
     }

    return 0;
}