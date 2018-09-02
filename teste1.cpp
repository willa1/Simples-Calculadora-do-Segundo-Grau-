#include <iostream>
#include <math.h>
#include <cctype>
using namespace std;
int main(){
  double X1, X2, a, b, c, delta;
  char opc;

    do{
        printf("\033[H\033[J");
        int res=1;

          cout << "Criado por Willa Cantanhede P. de brito!\n";
          cout << "Bem-Vindo a Calculado do Segundo grau!\n";
            cout << "Digite A: ";
              cin >> a;
            cout << "Digite B: ";
              cin >> b;
            cout << "Digite C: ";
              cin >> c;

          delta=(b*b)-4*a*c;
          (delta >= 0) ? res++ : res--;

          switch(res){
              case 2:
                X1=((-b)+sqrt(delta))/(2*a);
                  X2=((-b)-sqrt(delta))/(2*a);
                    cout << "\nX1= " << X1;
                      cout << "\nX2= " << X2;
                        cout << "\nDELTA= " << delta;
                          break;
              case 0:
                cout << "\nERROS: DELTA NEGATIVO!";
                  cout << "\nDELTA: " << delta;
                    break;

          }

      cout << "\n\nDeseja fazer Novamente?[S/n]: ";
        cin >> opc;
      }while(opc == 's');

  return 0;
}
