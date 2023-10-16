#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,h,m,s;
    
    cin >> t;

    h = t/3600;
     t = t%3600;
    m = t/60;
     t = t%60;
    s = t;

    cout << h << ":" << m << ":" << s << endl;




    return 0;
}