#include <iostream>
#include <string>

using namespace std;

int main(){
    int contador = 0;
    string frase;
    string espera;
    // Recebe a frase do usuario
    cout<<"Digite uma frase ou palavra"<<endl;
    getline(cin, frase);


    // Conta o numero de A na frase
    for(char c : frase){
        if(c == 'a' || c == 'A'){
            contador++;
        }
    }

    //Resultados
    if(contador>0){
        cout<<"A letra 'a' aparece "<< contador<< " vez(es) na frase"<< endl;
    } else {
        cout<<"A letra 'a' nao aparece na frase";
    }
    cin >> espera;
    return 0;
}