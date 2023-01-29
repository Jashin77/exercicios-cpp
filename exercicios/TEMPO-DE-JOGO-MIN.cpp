#include <iostream>

using namespace std;

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;

    cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

    int minutosIniciais = horaInicial * 60 + minutoInicial;
    int minutosFinais = horaFinal * 60 + minutoFinal;
    int diferenca;

    if(horaInicial == horaFinal && minutoInicial == minutoFinal){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
    }

    if (minutosIniciais <= minutosFinais) {
        diferenca = minutosFinais - minutosIniciais;
    } else {
        diferenca = (24 * 60 - minutosIniciais) + minutosFinais;
    }

    int horas = diferenca / 60;
    int minutos = diferenca % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

Exemplo de Entrada	Exemplo de Saída
7 8 9 10

O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)

7 7 7 7

O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)

7 10 8 9

O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)

*/