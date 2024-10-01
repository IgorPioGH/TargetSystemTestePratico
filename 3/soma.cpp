#include <iostream>

using namespace std;

int main(){
    string espera;
    int indice=12, soma=0, k=1;
    while(k < indice){
        k = k+1;
        soma = soma + k;
    }
    cout<<"A soma eh: "<<soma;
    cin>> espera;
    return 0;
}