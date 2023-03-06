#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    for (int i=0; i<6;i++){
        if(x%2 == 0){
            x++;
        }
        if(x%2 == 1){
            cout << x << endl;
            x+=2;
        }
        
    }
}
/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.

Exemplo de Entrada	
8

Exemplo de Saída
9
11
13
15
17
19
*/