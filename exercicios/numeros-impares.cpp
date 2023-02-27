#include <iostream>
using namespace std;

int main(){
    int x=1;
    int n=1;

    cin >> x;

    while(n <= x){
        cout << n << endl;
        n+=2;
    }
    return 0;

}
/*Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.

Entrada
O arquivo de entrada contém 1 valor inteiro qualquer.

Saída
Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.

Exemplo de Entrada	
8

Exemplo de Saída

1
3
5
7
*/