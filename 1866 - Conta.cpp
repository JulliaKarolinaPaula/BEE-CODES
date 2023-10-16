#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, n, s;

    cin >> c;

    for(int i = 0;i < c;i++){
        cin >> n;
         if(n%2==0){
            s = 0;
         } else{
            s = 1;
         }
        cout << s << endl;
    }


    return 0;
}