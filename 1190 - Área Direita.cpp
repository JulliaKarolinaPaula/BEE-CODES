#include <bits/stdc++.h>
#define MTZ 12
using namespace std;

int main(){
    int i , j, cont=0;
    double m[MTZ][MTZ], soma=0, media=0;
    char o;
    
    cin >> o;
    
    for(i = 0;i < MTZ;i++){
        for(j = 0;j < MTZ;j++){
            cin >> m[i][j];
        }
    }
    
    for(j = 7;j < MTZ;j++){
        for(i = 0;i < MTZ;i++){
            int veri = i + j;
            
            if(veri > 11){
                if(i==j) break;
                
                soma += m[i][j];
                cont++;
                
            }
        }
    }
    if(o == 'S'){
        cout << fixed << setprecision(1);
        cout << soma << endl; 
    } else if(o == 'M'){
        media = soma/cont;
        cout << fixed << setprecision(1);
        cout << media << endl;
    }
            
            
    
    
    
    return 0;
}