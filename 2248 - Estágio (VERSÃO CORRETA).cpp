#include <bits/stdc++.h>
using namespace std;

int main(){
    int alunos, teste = 0;

    while(cin >> alunos){
        if(!alunos) return 0;

        teste++;

        int codigo[alunos], media[alunos];
        
        for(int i = 0;i < alunos;i++){
            cin >> codigo[i] >> media[i];
        }

        int maior = 0;

        for(int i = 0;i < alunos;i++){
            if(media[i] > maior){
                maior = media[i];
            }
        }

        cout << "Turma " << teste << endl;

        for(int i = 0;i < alunos;i++){
            if(media[i] == maior){
                cout << codigo[i] << " ";
            }
        }
        cout << endl << endl;

    }
    return 0;
}