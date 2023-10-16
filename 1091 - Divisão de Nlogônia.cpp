#include <bits/stdc++.h>
using namespace std;

int main (){
    int k;

    while(cin >> k){
        if(k==0) return 0;
          int n, m;
           cin >> n >> m;  
            
        for(int i = 0;i < k;i++){
            int x,y;
            cin >> x >> y;

            if((x == n)||(y == m)){
                cout << "divisa" << endl;
            } else if((x > n)&&(y > m)){
                cout << "NE" << endl;
            } else if((x < n)&&(y > m)){
                cout << "NO" << endl;
            } else if((x > n)&&(y < m)){
                cout << "SE" << endl;
            } else{
                 cout << "SO" << endl;
            }

        }
    }



    return 0;
}