#include <bits/stdc++.h>
using namespace std;

int main(){
   double n1,n2,n3,n4,media,nE,medFim;

   cin >> n1 >> n2 >> n3 >> n4;

   media = (((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1));
    if(media >= 7.0){
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    } else if(media < 5.0){
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    } else{
        cout << fixed << setprecision(1);
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cin >> nE;
        cout << "Nota do exame: "<< nE << endl;
        medFim = (media+nE)/2;
        if(medFim >= 5.0){
            cout << "Aluno aprovado." << endl;
        } else{
            cout << "Aluno reprovado" << endl;
        } cout << "Media final: " << medFim << endl;
    } 

    return 0;
}