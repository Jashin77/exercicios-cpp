#include<iostream>

using namespace std;

int main(){
    int num;
    int pares=0;

    for(int i=0; i<5; i++){
        cin >> num;
        if(num % 2 == 0){
            pares++;
        }
    }
    cout << pares << " valores pares" << endl;

    return 0;
}
/*Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-4
12

3 valores pares*/