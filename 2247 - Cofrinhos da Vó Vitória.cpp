#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=0, t = 1, a=0, b=0;

  while (n != 0){

    cin >> n;
    
   if(n == 0){ 
      return 0;
   } else{
    
    cout << "Teste " << t << endl;
    
    for (int i = 1; i <= n; i++){
      int j = 0, z = 0;
      cin >> j >> z;
      
      a += j;
      b += z;
      
      cout << a-b << endl;  
    }
      cout << endl;
      t++;
    }
  }

  return 0;
}