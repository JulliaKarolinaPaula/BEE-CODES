#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
   double n;
   int intN=0, n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,mo1=0,mo50=0,mo25=0,mo10=0,mo5=0,mo01=0;
     
     cin >> n;
        intN = int(round(n*100));

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
         while(intN >= 1*100){
            intN -= 1*100;
            mo1 += 1;
         }
         while(intN >= 50){
            intN -= 50;
            mo50 += 1;
         }
          while(intN >= 25){
            intN -= 25;
            mo25 += 1;
         }
          while(intN >= 10){
            intN -= 10;
            mo10 += 1;
         }
          while(intN >= 5){
            intN -= 5;
            mo5 += 1;
         }
          while(intN >= 1){
            intN -= 1;
            mo01 += 1;
         }
      
       cout << fixed << setprecision(2);
       cout << "NOTAS:"<< endl;
       cout << n100 << " nota(s) de R$ 100.00" << endl;
       cout << n50 << " nota(s) de R$ 50.00" << endl;
       cout << n20 << " nota(s) de R$ 20.00" << endl;
       cout << n10 << " nota(s) de R$ 10.00" << endl;
       cout << n5 << " nota(s) de R$ 5.00" << endl;
       cout << n2 << " nota(s) de R$ 2.00" << endl;
       cout << "MOEDAS:" << endl;
       cout << mo1 << " moeda(s) de R$ 1.00"<< endl;
       cout << mo50 << " moeda(s) de R$ 0.50"<< endl;
       cout << mo25 << " moeda(s) de R$ 0.25"<< endl;
       cout << mo10 << " moeda(s) de R$ 0.10"<< endl;
       cout << mo5 << " moeda(s) de R$ 0.05"<< endl;
       cout << mo01 << " moeda(s) de R$ 0.01"<< endl;
    return 0;
}