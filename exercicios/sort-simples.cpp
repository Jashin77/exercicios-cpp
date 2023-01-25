#include <iostream>

using namespace std;

int main(){

    int a,b,c,x;
    int a2, b2, c2;

    cin >> a >> b >> c; 

    a2 = a;
    b2 = b;
    c2 = c;

    if (b < a){
        x = a;
        a = b;
        b = x;
    }
    if (c < a){
        x = a;
        a = c;
        c = x;
    }
    if (c < b){
        x = b;
        b = c;
        c = x;
    }
    cout << a << "\n" << b << "\n" << c << endl;
    cout << "\n";
    cout << a2 << "\n" << b2 << "\n" << c2 << endl;

    return 0;
}
/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.

Exemplo de Entrada:        Exemplo de Saída:
7 21 -14                      -14
                               7
                               21
                              
                               7
                               21
                              -14*/