#include <bits/stdc++.h>
using namespace std;

int main (){
    int a,b,c,maiorAB;
    cin >> a >> b >>c;

    maiorAB = (a+b+abs(a-b))/2;
    if(c > maiorAB){
        cout << c << " eh o maior" << endl;
    } else {
        cout << maiorAB << " eh o maior" << endl;
    }
    
    return 0;
}