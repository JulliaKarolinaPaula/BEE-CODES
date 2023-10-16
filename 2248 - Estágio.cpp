#include <bits/stdc++.h>
using namespace std;

int main(){
   int alunos, teste=0, maior = 0, cod_maior;

   while(cin >> alunos){
     if(alunos == 0) return 0;
    
     int codigo[alunos], media[alunos], cdfs[alunos];
      
      teste++;

    for(int i = 0;i < alunos;i++){
        cin >> codigo[i] >> media[i];

        if(media[i] > maior){
            maior = media[i];
        }
    }
    for(int i = 0;i < alunos;i++){
        if(media[i] == maior){
            cdfs[i] = codigo[i];
        }
    }
    cout << "Turma " << teste << endl;
    for(int i = 0;i < alunos;i++){
      vector<int> cdfs(alunos, codigo[i]);
       if(media[i] == maior){
        cout << cdfs[i] << " ";
       }
    }
    cout << endl;
   }
    return 0;
}