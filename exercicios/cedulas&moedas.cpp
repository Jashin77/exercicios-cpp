#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float n;
    int valor;

    cin >> n;

    valor = int(round(n*100));

    int cedula_100 = 0;
    int cedula_50 = 0;
    int cedula_20 = 0;
    int cedula_10 = 0;
    int cedula_5 = 0;
    int cedula_2 = 0;
    int moedas_100 = 0;
    int moedas_50 = 0;
    int moedas_25 = 0;
    int moedas_10 = 0;
    int moedas_5 = 0;
    int moedas_1 = 0;

    while (valor >= 100*100){
        valor -= 100*100;
        cedula_100 += 1;
    }
    
    while (valor >= 50*100){
        valor -= 50*100;
        cedula_50 += 1;
    }

    while (valor >= 20*100){
        valor -= 20*100;
        cedula_20 += 1;
    }

    while (valor >= 10*100){
        valor -= 10*100;
        cedula_10 += 1;
    }

    while (valor >= 5*100){
        valor -= 5*100;
        cedula_5 += 1;
    }

    while (valor >= 2*100){
        valor -= 2*100;
        cedula_2 += 1;
    }

    while (valor >= 100){
        valor -= 100;
        moedas_100 += 1;
    }

    while (valor >= 50){
        valor -= 50;
        moedas_50 += 1;
    }

    while (valor >= 25){
        valor -= 25;
        moedas_25 += 1;
    }
    
     while (valor >= 10){
        valor -= 10;
        moedas_10 += 1;
    }

     while (valor >= 5){
        valor -= 5;
        moedas_5 += 1;
    }

    moedas_1 += valor;
    
    cout << "NOTAS:" << endl;
    cout << cedula_100 << " nota(s) de R$ 100.00" << endl;
    cout << cedula_50 << " nota(s) de R$ 50.00" << endl;
    cout << cedula_20 << " nota(s) de R$ 20.00" << endl;
    cout << cedula_10 << " nota(s) de R$ 10.00" << endl;
    cout << cedula_5 << " nota(s) de R$ 5.00" << endl;
    cout << cedula_2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << moedas_100 << " moeda(s) de R$ 1.00" << endl;
    cout << moedas_50 << " moeda(s) de R$ 0.50" << endl;
    cout << moedas_25 << " moeda(s) de R$ 0.25" << endl;
    cout << moedas_10 << " moeda(s) de R$ 0.10" << endl;
    cout << moedas_5 << " moeda(s) de R$ 0.05" << endl;
    cout << moedas_1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}