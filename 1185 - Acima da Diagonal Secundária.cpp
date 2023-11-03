#include <bits/stdc++.h>
#define MTZ 12
using namespace std;

int main(){ 
    int i, j,cont=0;
    char o;
    double m[MTZ][MTZ];
    double soma,media;

    cin >> o;

    for(i = 0;i < MTZ;i++){
        for( j = 0;j < MTZ;j++){
            cin >> m[i][j];
        }
    }
    for(i = 0;i < MTZ;i++){
        for(j = 0;j < MTZ;j++){
          int veri = i + j;
          if(veri <= 10){
            soma += m[i][j];
            cont++;
          }
        }
    }

   if(o == 'S'){
    cout << fixed << setprecision(1);
    cout << soma << endl;
   } else if (o == 'M'){
      media = soma/cont;
      cout << fixed << setprecision(1);
      cout << media << endl;
   }
   

    return 0;
}