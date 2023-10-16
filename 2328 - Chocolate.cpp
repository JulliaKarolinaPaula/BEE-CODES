#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, sobra=0, estoque=0;

    cin >> n;

    for(int i = 0;i < n;i++){
        cin >> m;
        
        sobra = m - 1;
        estoque += sobra;
    }

    cout << estoque << endl;


    return 0;
}