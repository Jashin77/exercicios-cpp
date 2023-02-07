#include <stdio.h>


int main(){
   int i;
   int valorPositivo;
   double x;

   valorPositivo = 0;

   i - 1;
   for(i = 1 ; i <= 6 ; i = i + 1){
      scanf ("%lf", &x);

      if(x > 0.0)
           valorPositivo = valorPositivo + 1;
   }

   printf("%d valores positivos\n", valorPositivo);

}
/*Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-3.4
4.6
12

4 valores positivos*/