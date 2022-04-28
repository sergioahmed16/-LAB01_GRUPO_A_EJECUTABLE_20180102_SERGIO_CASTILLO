//EJERCICIO 1: Hacer un programa que sin usar la función pow(), pero por medio de una función, 
//calcule la potencia de un número (ambos números ingresados por teclado).
#include <iostream>
using namespace std;

int funcionPotencia()
{
   int base,exponente,potencia;
  cout<<"Ingresa la base: ";
  cin>>base;

  cout<<"Ingresa el exponente: ";
  cin>>exponente;
 potencia=1;
 for (int i=0;i<exponente;i++)
 {
     potencia*=base;
 };

 return potencia;
}


int main() {

  cout<<funcionPotencia() ;
  return 0;
}

//EJERCICIO 2
#include <iostream>

using namespace std;
//FUNCION VOID
void bisiesto(int fecha){
    //CONDICIONAL QUE AFIRMA LA EXISTENCIA DEL ANO BISIESTO
    if (fecha%4==0 and fecha%100!=0 or fecha%400==0 ){
        cout<<fecha<<" ESTE ES UN ANO BISIESTO"<<endl;

    }
    else {
        cout<<fecha<<"ESTE NO ES UN ANO BISIESTO "<<endl;
    }
}
//MAIN 
int main()
{
    int fecha;
    cout<<"INDIQUE EL  ANO: "<<endl;
    cin>>fecha;

    bisiesto(fecha);

}


//EJERCICIO 3
//Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento de 
//una persona y por medio de una función calcule su edad en años, meses y días.
#include <iostream>
using namespace std;
void edad(int dia, int mes, int ano,int dia0, int mes0, int ano0)
{
  int dias, meses, anos;
  int matriz[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
  anos = ano - ano0;
  meses=0;
  dias=0;


//PARA CONTAR LAS VARIACIONES DE LOS ANOS BISIESTOS
for (int i=ano0;i<=ano;i++){


    //SUMAR EL DÍA DE CADA AÑO BISIESTO
        if (i%4==0){

            dias+=1;
        }
    //DESCONTAR DÍAS ERRÓNEAMENTE CONTADOS POR EL CONTADOR ANTERIOR
    //ES DECIR, CUANDO EL PRIMER AÑO NO CUENTA EL DÍA EXTRA DE AÑO BISIESTO
        if (i==ano0){

            if (mes0>2){
                dias-=1;
            }
    //DESCONTAR DÍAS ERRÓNEAMENTE CONTADOS POR EL CONTADOR ANTERIOR
    //ES DECIR, CUANDO EL ULTIMO AÑO NO CUENTA EL DÍA EXTRA DEL AÑO BISIESTO
        if (i==ano){

            if (mes<=2 and dia<=28){
                dias-=1;
            }

        }
    }

    }

//CIERRE DE SECCION PARA ANOS BISIESTOS
  if (mes < mes0)
  {
    anos--;
    meses = 12 - (mes0- mes);
  }
  else
  {meses = mes- mes0;}
  if (dia < dia0)
  {
    meses--;
    dias += matriz[mes- 1] - (dia0- dia);
  }
  else
  {dias += dia- dia0;}
  cout << "TU EDAD ES : \n";
  cout << anos << " ANOS " << meses << " MESES " << dias<< " DIAS. ";


}
int main()
{
  int dia, mes, ano, dia0, mes0, ano0;
  cout << " INGRESA el dia/mes/ano: \n";
  cin >> dia>> mes>> ano;
  cout << " Ingresa el dia/mes/ano de nacimiento: \n";
  cin >> dia0>> mes0>> ano0;
 edad(dia, mes, ano, dia0, mes0, ano0);

  return 0;
}





//EJERCICIO 4
#include <iostream>
using namespace std;

int main() {

  int limite;
  bool es_primo= true;

  cout << "Ingresa el limite superior: ";
  cin >> limite;

  cout << "\nNumeros primos entre " << 1 << " y " << limite<< " son: " <<  endl;


  for (int i = 2; i <= limite; ++i) {
        es_primo=true;
        for(int j=2;j<i;j++){


        if (i% j == 0) {
        es_primo = false;
        break;
      }
      }
    if (es_primo)
      cout << i << ", ";

    }


        return 0;

    }


//EJERCICIO 5
#include <iostream>
using namespace std;

int retornar(){
   cout<<"Ingrese x : ";
    int x;
    cin>>x;
    if (x%2==0){
        cout<<x <<"  es par\n";

    }

    int suma=0;
    for (int i = 1; i <= x; ++i) {
        if (i%2!=0){
           suma+=i;
        }
     }
     return suma;}

int main() {

    cout<<"La suma de impares  es " <<retornar();
    }


