//Nome: Igor Ferronato Fonseca Pio; Nº USP: 11297361
#include <iostream>
#include <cmath>

using namespace std;

// Função auxiliar para verificar se o número passado está na Fibonacci
bool QuadradoPerfeito(int num){
    // Verifica se o numero eh quadrado perfeito, metodo utilizado para verificar se um numero esta na
    // sequencia de fibonacci em O(1)
    int s = sqrt(num);
    return (s * s == num); // Retorna true se for quadrado perfeito e false se não for
}

// Função que encapsula QuadradoPerfeito(int num) e verifica se o numero passado esta na sequencia
bool EstaFibonacci(int num){
    // O numero passado so estara na Fibonacci se o produto do numero elevado ao quadrado com 5 somado com 4 for quadrado perfeito
    // Ou se o produto do numero elevado ao quadrado com 5 subtraido com 4 for quadrado perfeito
    int equacao1 = 5*num*num+4;
    int equacao2 = 5*num*num-4;
    return QuadradoPerfeito(equacao1) || QuadradoPerfeito(equacao2);
}

// Funcao main
int main(){
    int num;
    char await;
    cout<< "Digite um numero: "<<endl;
    cin>>num;

    if(EstaFibonacci(num)){
        cout<<"O numero "<< num << " esta na sequencia de Fibonacci!"<< endl;
    } else {
        cout << "O numero "<<num<< " nao esta na sequencia de Fibonacci!"<<endl;
    }
    cin >> await;
    return 0;
}