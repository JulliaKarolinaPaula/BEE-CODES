#include <bits/stdc++.h>  <cmaath> 
using namespace std;

int main (){
    double x1,y1,x2,y2,dist1,dist2,disT;

    cin >> x1 >> y1 >> x2 >> y2;
    
    dist1 = pow((x2-x1),2);
    dist2 = pow((y2-y1),2);
    disT = sqrt(dist1+dist2);
    cout << fixed << setprecision(4);
    
    cout << disT << endl;
    return 0;
}