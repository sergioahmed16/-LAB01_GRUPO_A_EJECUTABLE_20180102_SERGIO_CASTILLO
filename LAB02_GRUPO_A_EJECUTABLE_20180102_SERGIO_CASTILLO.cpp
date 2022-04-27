//1
#include <iostream>

using namespace std;

int main()
{
    int semilla=2;
    int sumatoria=0;
    for (int i=0;i<101;i+=2){
        sumatoria+=i;

    }
    cout << sumatoria<< endl;
    return 0;
}

//2
#include<iostream>
using namespace std;
int main()
{
int i = 3;
int n = 1;
int a[50];
a[0] = 2; // Numero inicial
bool confirm = false;
while(n<51)
{
for(int j = 2; j<i;j++)
{
if(i%j == 0)
break;
else if(j == i-1)
{
a[n] = i;
n++;
}
}
i++;
}
cout<<"Los 50 primeros primos son:";
for(int j = 0;j<50;j++)
cout<<" "<<a[j];
return 0;
}

//3
#include<iostream>
using namespace std;
int main()
{
cout<<"Los multiplos de 5 entre 1 y 100 son:";
for(int i = 1;i<=100;i++)
{
if(i%5==0)
cout<<" "<<i;
}
return 0;
}


//4
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    int contador=0;
    bool activar_conteo_extra=false;
    for (int i=x;i<=y;i+=1){
        for (int j=2;j<=sqrt(i);j++){
            if (i%j==0){
                contador+=1;
            }
        }
        if (contador==0){
            cout<<i<<" es primo \n";
                   //bool activar_conteo_extra=false;

        }
        else if (contador!=0){
            cout<<i<<" faltan primos \n";
                   bool activar_conteo_extra=true;

        }
        contador=0;
        ;
    }
    int candidato;
    if (activar_conteo_extra==true){
    for (int k=1;k<x;k++){
        cout<<"bucle";
        candidato=x-k;
        for (int j=2;j<=sqrt(candidato);j++){
            if (candidato%j==0){
                contador+=1;
            }
        }
        if (contador==0){
            cout<<candidato<<" es primo \n";

        }
        contador=0;
        ;

        candidato=y+k;
        for (int j=2;j<=sqrt(candidato);j++){
            if (candidato%j==0){
                contador+=1;
            }
        }
        if (contador==0){
            cout<<candidato<<" es primo \n";
        }
        contador=0;
        ;

        }
    }
    return 0;
}

//5
#include<iostream>
using namespace std;
int main(){
int n;
// numeros
float mayor,menor,suma;
cout<<"Cantidad de numeros: ";
cin>>n;
float lista[n];
for(int i=0;i<n;i++){
cout<<"Ingrese un numero: ";
cin>>lista[i];
}
menor=lista[0];
mayor=lista[0];
for(int j=0;j<n;j++){
if(lista[j]<menor){
menor=lista[j];
}
if(lista[j]>mayor){
mayor=lista[j];
}
suma+=lista[j];
}
cout<<endl<<"El mayor es: "<<mayor;
cout<<endl<<"El menor es: "<<menor;
cout<<endl<<"La media es: "<<suma/n;
return 0;
}


//6
#include<iostream>
using namespace std;
int main(){
int num1=0,num2=1,num3;
cout<<"Serie de Fibonacci: "<<endl;
cout<<num1<<" "<<num2<<" ";
for(int i=0;i<20;i++){
    num3=num1+num2;
    cout<<num3<<" ";
    num1=num2;
    num2=num3;
    }
return 0;
}
//7
#include <iostream>
using namespace std;
int main() {
float a[10];
float b=0;
cout<<"INGRESE 3 NUMEROS "<<endl;
for(int i=0;i<3;i++){cin>>a[i];
}
for(int j=0;j<3;j++){
b=b+a[j];
}
cout<<"promedio de las 3 notas "<<b/3<<endl;
return 0;
}

//8
#include <iostream>
using namespace std;
int main() {
int numero;
cout<<"ingrese la tabla del numero deseado"<<endl;
cin>>numero;
for(int i=1;i<13;i++)
cout<<i<<" * "<<numero<<" = "<<i*numero<<endl;
return 0;
}

//9
#include <iostream>
using namespace std;
int main(){
int numero;
cout<<"Ingrese un numero que represente la dimension de un triangulo: ";
cin>>numero;
for (int i=1;i<=numero;i++){
for (int j=0;j<i;j++){
cout<<"*";
}
cout<<endl;
}
return 0;
}

//10
#include <iostream>
using namespace std;
void inversor(string cadena)
{
//condicion inicial:    
if(cadena.size()==1)
{
cout<<cadena[0];
return;
}
cout<<cadena[cadena.size()-1];
//condiciones sucesivas
inversor(cadena.substr(0,cadena.size()-1));
}
int main()
{
string palabra;
cout<<"palabra ";
cin>>palabra;
cout<<"palabra invertida es: ";
invierte(palabra);
return 0;
}