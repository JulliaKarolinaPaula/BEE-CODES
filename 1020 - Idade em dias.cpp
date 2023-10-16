#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,a,m,d;

    cin >> i;

    a = i/365;
    i = i%365;
    m = i/30;
    d = i%30;

    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;

    return 0;
}