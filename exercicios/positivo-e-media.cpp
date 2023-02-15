#include <iostream>

using namespace std;

int main() {
    float num;
    int count = 0;
    float sum = 0;

    for (int i = 0; i < 6; i++) {
        cin >> num;

        if (num > 0) {
            count++;
            sum += num;
        }
    }

    cout << count << " valores positivos" << endl;
    cout << fixed;
    cout.precision(1);
    cout << sum / count << endl;

    return 0;
}
/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-3.4
4.6
12

4 valores positivos
7.4*/