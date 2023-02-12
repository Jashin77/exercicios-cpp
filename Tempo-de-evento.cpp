#include <iostream>

using namespace std;

int main()
{
    int dia1, hora1, minuto1, segundo1;
    string palavra1, palavra2;
    char a, b, c, d;
    
    cin >> palavra1 >> dia1;
    cin >> hora1 >> a >> minuto1 >> b >> segundo1;
    
    int dia2, hora2, minuto2, segundo2;

    cin >> palavra2 >> dia2;
 
    cin >> hora2 >> c >> minuto2 >> d >> segundo2;
 
    int diferenca_em_segundos = (dia2 - dia1) * 24 * 60 * 60 + (hora2 - hora1) * 60 * 60 + (minuto2 - minuto1) * 60 + (segundo2 - segundo1);

    int dias = diferenca_em_segundos / (24 * 60 * 60);
    int horas = (diferenca_em_segundos % (24 * 60 * 60)) / (60 * 60);
    int minutos = (diferenca_em_segundos % (60 * 60)) / 60;
    int segundos = diferenca_em_segundos % 60;

    cout << dias << " dia(s)\n" << horas << " hora(s)\n" << minutos << " minuto(s)\n" << segundos << " segundo(s)" << endl;
    return 0;
}
/*Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

Exemplo de Entrada	Exemplo de Saída
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23

3 dia(s)
22 hora(s)
1 minuto(s)
0 segundo(s)*/