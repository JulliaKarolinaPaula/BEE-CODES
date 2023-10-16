#include <bits/stdc++.h>  <cmaath> 
using namespace std;

int main (){
    double x1,y1,x2,y2,dist1,disT;

    cin >> x1 >> y1 >> x2 >> y2;
    
    dist1 = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    disT = sqrt(dist1);
    cout << fixed << setprecision(4);
    
    cout << disT << endl;
    return 0;
}