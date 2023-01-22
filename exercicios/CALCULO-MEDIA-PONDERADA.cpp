#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    cout << fixed << setprecision(1);

    double n1,n2,n3,n4; //4 notas de alunos
    bool exame = false;
    double n5; //nota do exame final caso aluno esteja em exame

    cin >> n1 >> n2 >> n3 >> n4;

    double media = ((2*n1) + (3*n2) + (4*n3) + n4) / 10; //calculo da media ponderada, nota 1 peso 2, nota 2 peso 3, nota 3 peso 4, nota 4 peso 1

    cout << "Media: " << media << endl;

    if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }else if(media >= 5.0 && media < 7.0){
        cout << "Aluno em exame." << endl;
        exame = true;

            if (exame = true){
               cin >> n5;
               cout << "Nota do exame: " << n5 << endl;
               double media2 = (n5 + media) / 2;
                  if(media2 >= 5.0){
                    cout << "Aluno aprovado." << endl;
                 }else if(media2 < 5.0){
                    cout << "Aluno reprovado." << endl;
                 }
                    cout << "Media final: " << media2 << endl;
            }
       }
    return 0;
}
