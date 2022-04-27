
//EJERCICIO1
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Ingrese dos numeros:\n";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"Producto: ";
    cout<<a*b;
    return 0;
}

//EJERCICIO 2
#include <iostream>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    cout<<"Ingrese DATOS:\n";
    string a,b,c;
    cout<<"Ingrese nombre:\n";

    cin>>a;
    cout<<"Ingrese apellido paterno:\n";
    cin>>b;
    cout<<"Ingrese apellido materno:\n";
    cin>>c;

    int n = a.length();
    char char_array[n + 1];
    strcpy(char_array, a.c_str());

    cout<<char_array[0];
    //for (int i = 0; i < n; i++)
     //   cout << char_array[i];

    cout<<b;

    int n2 = c.length();
    char char_array2[n2 + 1];
    strcpy(char_array2, c.c_str());

    cout<<char_array2[0];
    cout<<"@unsa.edu.pe";
    return 0;
}

//EJERCICIO 3

#include <iostream>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int hora,minuto,minutosextra;
    cout<<"Este programa recibe horas (de 0 a 24) y las convierte al formato AM/PM (0 a 12 horas), \n asimismo, agrega la cantidad de tiempo deseada (en minutos):\n";

    string ampm;

    cout<<"Ingrese hora:\n";
    cin>>hora;
    cout<<"Ingrese minuto:\n";
    cin>>minuto;

    cout<<"Ingrese el aumento de tiempo en minutos:\n";
    cin>>minutosextra;

    cout<<"Nueva hora:\n";
    //convertidor de minutos a horas y minutos
    //sirve para evitar estar dividiendo a cada rato los n minutos en m horas
    int horasextra=minutosextra/60;
    minutosextra=minutosextra-horasextra*60;

    //sumar el tiempo
    //es importante poner los minutos antes de las horas, para contar que un incremento de 60 minutos es una hora
    minuto+=minutosextra;
    if (minuto>=60)
        {minuto=minuto%60;
         hora+=1;
        }

    hora+=horasextra;
    if (hora>=24)
        {hora=hora%24;
        }
    cout<< "Son las " <<hora<<" horas "<<" con  "<<minuto<<" minutos\n";
    if (hora>12)
        {hora-=12;
        cout<< "Son las " <<hora<<"  "<<" con "<<minuto<<" minutos PM\n";
    }
    else if (hora==12)
        {
        cout<< "Son las " <<hora<<"  "<<" con "<<minuto<<" minutos PM\n";
    }

    else if (hora<12)
        {
        cout<< "Son las " <<hora<<"  "<<" con "<<minuto<<" minutos AM\n";
    }


   return 0;
}

//EJERCICIO4
#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;
int main()
{
    auto hora = chrono::system_clock::now();

    time_t tiempo = chrono::system_clock::to_time_t(hora);

    cout << "Ahora estamos en:" << ctime(&tiempo)
    
              << endl;
}

//EJERCICIO 4 FORMA ALTERNATIVA
#include <iostream>
using namespace std;
int main() {
int a=0;
int c,d;
cout<<"INGRESE LOS MINUTOS PARA CONVERTIRLOS AL FORMATO DE HORAS:MINUTOS:"<<endl;
cin>>c;
while(c>=60){
a=a+1;
c=c-60;
}
cout<<"Hora actual: "<<a<<" : "<<c;
return 0;
}


//EJERCICIO5
#include <iostream>
using namespace std;
int main() {
int a;
float b;
cout<<"Flotante: "<<endl;
cin>>b;
a=b;
cout<<"Entero: "<<a;
return 0;
}

//EJERCICIO6
#include <iostream>
using namespace std;
int main(){
//numero en sistema decimal:
int numero=0,
//Se crea una variable independiente del bucle for que representa el conteo de cifras del binario

x=0;
//arreglo numero_binario
int numero_binario[100];

//bucle do while para evitar ingresos erroneos
do{
cout<<"Ingresa un numero entre el 100 y 999. \nEsta ventana aparecera infinitamente si no ingresa el numero apropiado: ";
cin>>numero;
}
while (numero<100 or numero>999);
//bucle for para generar las cifras del numero binario
for (int i=0;i<100;i++){
//cada adición de dos unidades generan un dígito 1 en el numero binario
numero_binario[i] = numero%2;
numero = numero/2;
//variable independiente del bucle for que representa el conteo de cifras del binario
x++;
if (numero==0){
break;
}
}
cout<<"El numero binario es: ";
for (int i=x-1; i>=0;i--){
//Se imprimen las cifras:
cout<<numero_binario[i];
}
return 0;
}

//EJERCICIO7
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Primer numero: ";cin>>a;
cout<<"Segundo numero: ";cin>>b;
if(a % b == 0){
cout<<b<<" es divisor de "<<a;
}
else if(b % a == 0){
cout<<a<<" es divisor de "<<b;
}
else{
cout<<"No son divisibles entre si";
}
return 0;
}
//EJERCICIO8
#include <iostream>
using namespace std;
int main() {
float a[100];
int x;
float b=0;
float k;
cout<<"ingrese numero de x valores a ingresar ";
cin>>x;
cout<<"ingrese los valores: ";

for(int i=0;i<x;i++){
cin>>a[i];
}
for(int i=0;i<x;i++){
b=b+a[i];
}
k=b/x;
cout<<"media de numeros ingresados es "<<k<<endl;
return 0;
}

//EJERCICIO9
#include <iostream>
using namespace std;
int main() {
    //CREACION DEL ARREGLO
int arreglo[10];
//CONTADOR
int cont=0;
cout<<"INGRESE 10 NUMEROS? "<<endl;
for(int i=0;i<10;i++){
cin>>arreglo[i];
}
for(int i=0;i<10;i++){
        //RESTRICCION DE LOS NUMEROS NEGATIVOS
if(arreglo[i]<1){
cont=cont+arreglo[i];
}
}
cout<<"RESULTADO:  "<<cont;
return 0;
}

//EJERCICIO 10
#include <iostream>
using namespace std;
int main() {
char ARREGLO[20];
string b="shrek";
cout<<"INGRESE LA CONTRASENA:"<<endl;
cin>>ARREGLO;
while(ARREGLO!=b){
cout<<"INGRESE LA CONTRASENA CORRECTA: "<<endl;
cin>>ARREGLO;
}
return 0;
}
