#include <iostream> 

using namespace std;

int main(){
    double a(0 < a),b(0 < b),c(0 < c);
    double x;

    cin >> a >> b >> c;

    if(b > a){
        x = a;
        a = b;
        b = x;
    }if(c > a){
        x = a;
        a = c;
        c = x;
    }if(c > b){
        x = b;
        b = c;
        c = x;
    }
    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }else
    if((a*a) == (b*b) + (c*c)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if((a*a) > (b*b) + (c*c)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if((a*a) < (b*b) + (c*c)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a == b && a == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if(a == b or a == b or b == c ){
        if(a != b or b != c or a != c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.

Exemplos de Entrada	Exemplos de Saída
7.0 5.0 7.0

TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES

6.0 6.0 10.0

TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES

6.0 6.0 6.0

TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO

5.0 7.0 2.0

NAO FORMA TRIANGULO

6.0 8.0 10.0

TRIANGULO RETANGULO*/