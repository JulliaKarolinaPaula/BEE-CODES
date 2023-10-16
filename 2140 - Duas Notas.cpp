#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    
  
    while(cin >> n >> m){
        if((n == 0)&&(m == 0)) return 0;
        
      int troco=0, intN=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;

      troco = m - n;

         intN = int(round(troco*100));

            while(intN >= 100*100){
                intN -= 100*100;
                n100 += 1;
            } 
            while(intN >= 50*100){
                intN -= 50*100;
                n50 += 1;
            }
            while(intN >= 20*100){
                intN -= 20*100;
                n20 += 1;
            }
            while(intN >= 10*100){
                intN -= 10*100;
                n10 += 1;
            }
            while(intN >= 5*100){
                intN -= 5*100;
                n5 += 1;
            }
            while(intN >= 2*100){
                intN -= 2*100;
                n2 += 1;
            }
        int notas = n100 + n50 + n20 + n10 + n5 + n2;

        if (notas > 2){
            cout << "impossible" << endl;
        } else if(notas < 2){
            cout << "impossible" << endl;
        } else{
            cout << "possible" << endl;
        }
    }
    return 0;
}