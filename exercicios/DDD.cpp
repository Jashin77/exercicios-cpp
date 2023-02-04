#include <iostream>
using namespace std;

int main(){

    int ddd;

    cin >> ddd;

    if(ddd == 61){
        cout << "Brasilia" << endl;
    }
    if(ddd == 71){
        cout << "Salvador" << endl;
    }
    if(ddd == 11){
        cout << "Sao Paulo" << endl;
    }
    if(ddd == 21){
        cout << "Rio de Janeiro" << endl;
    }
    if(ddd == 32){
        cout << "Juiz de Fora" << endl;
    }
    if(ddd == 19){
        cout << "Campinas" << endl;
    }
    if(ddd == 27){
        cout << "Vitoria" << endl;
    }
    if(ddd == 31){
        cout << "Belo Horizonte" << endl;
    }else if(ddd != 61 && ddd != 71 && ddd != 11 && ddd != 21 && ddd != 32 && ddd != 19 && ddd != 27 && ddd != 31){
        cout << "DDD nao cadastrado" << endl;
    }



    return 0;
}
/*Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence
61 Brasilia
71 Salvador
11 Sao Paulo
21 Rio de Janeiro
32 Luiz de Fora 
19 Campinas
27 Vitoria
31 Belo Horizonte

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado*/