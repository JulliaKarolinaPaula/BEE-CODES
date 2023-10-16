#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t=0;

    do{
       cin >> n; 
         t++;
       for(int i=1;i<=n;i++){
         int x;
         cin >> x;

         if(x == i){
            cout << "Teste " << t << endl;
            cout << x << endl;
            cout << endl;
         }
       }
    } while(n != 0);


    return 0;
}