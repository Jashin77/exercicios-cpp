#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);

    double salario;
    double newSalario;

    cin >> salario;

    if (salario > 0 && salario <= 400.00){
        cout << "Novo salario: " << salario + ((salario/100)*15) << endl;
        cout << "Reajuste ganho: " << (salario/100)*15 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
   if (salario >= 400.01 && salario <= 800.00){
        cout << "Novo salario: " << salario + ((salario/100)*12) << endl;
        cout << "Reajuste ganho: " << (salario/100)*12 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
   if (salario >= 800.01 && salario <= 1200.00){
        cout << "Novo salario: " << salario + ((salario/100)*10) << endl;
        cout << "Reajuste ganho: " << (salario/100)*10 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
   if (salario >= 1200.01 && salario <= 2000.00){
        cout << "Novo salario: " << salario + ((salario/100)*7) << endl;
        cout << "Reajuste ganho: " << (salario/100)*7 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
   if (salario > 2000.00){
        cout << "Novo salario: " << salario + ((salario/100)*4) << endl;
        cout << "Reajuste ganho: " << (salario/100)*4 << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
/*A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	Percentual de Reajuste
0 - 400.00               15%
400.01 - 800.00          12%
800.01 - 1200.00         10%
1200.01 - 2000.00         7%
Acima de 2000.00          4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
400.00

Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %

800.01

Novo salario: 880.01
Reajuste ganho: 80.00
Em percentual: 10 %

2000.00

Novo salario: 2140.00
Reajuste ganho: 140.00
Em percentual: 7 %*/