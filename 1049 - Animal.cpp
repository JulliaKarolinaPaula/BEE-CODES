#include <bits/stdc++.h>
using namespace;

int main(){
    wchar_t a,b,c;

    cin >> a >> b >> c;
    
    if((a == "vertebrado")){
        if((b == "ave")&&(c == "carniviro")){
        cout << "aguia" << endl;}
        else{
            cout << "pomba" << endl;
       } else if((b == "mamifero")&&(c == "onivoro")){
            cout << "homem" << endl;}
        else{
            cout << "vaca" << endl;
        }
    }
    else if(a == "invertebrado"){
        if((b == "inseto")&&(c == "hematofago")){
        cout << "pulga" << endl;}
        else{
            cout << "lagarta" << endl;
       } else if((b == "anelideo")&&(c == "hematofago")){
            cout << "sanguessuga" << endl;}
        else{
            cout << "minhoca" << endl;
        }
    }
    


    return 0;
}