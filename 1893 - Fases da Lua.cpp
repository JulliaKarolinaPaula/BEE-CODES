#include <bits/stdc++.h>
using namespace std;

int main(){
    int d1, d2;

    
    while(cin >> d1 >> d2){
      if(d1 > 100) break;
        if((d2 >= 0)&&(d2 <= 2)){
            cout << "nova" << endl;
        } else if((d2 >= 97)&&(d2 <= 100)){
            cout << "cheia" << endl;
        } else if(d1 < d2){
            cout << "crescente" << endl;
        } else if(d1 > d2){
            cout << "minguante" << endl;
        }
    } 
    return 0;
}