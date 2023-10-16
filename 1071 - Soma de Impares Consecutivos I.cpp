#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,im,soma;
    cin >> x >> y;
      for(int i = 0;x <= i <= y;i++){
        if(x%2==0){
            x += 1;
            im = x+2;
        } 
        else if(x%2 != 0){
            im = x + 2;
        }
        while(x<=y){
            soma = im + x;
            cout << soma << endl;
        }
        
      }

    return 0;
}