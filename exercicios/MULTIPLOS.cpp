#include <iostream>

using namespace std;

int main(){
    int a,b;

    cin >> a >> b;

    if (b > a){
        if (b % a == 0){
            cout << "Sao Multiplos" << endl;
        }else{
            cout << "Nao sao Multiplos" << endl;
        }
    }else if(a > b){
        if (a % b == 0){
            cout << "Sao Multiplos" << endl;
        }else{
            cout << "Nao sao Multiplos" << endl;
        }
    }
    return 0;
}
/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada
A entrada contém valores inteiros.

Saída
A saída deve conter uma das mensagens conforme descrito acima.

Exemplo de Entrada	Exemplo de Saída
6 24

Sao Multiplos

6 25

Nao sao Multiplos*/