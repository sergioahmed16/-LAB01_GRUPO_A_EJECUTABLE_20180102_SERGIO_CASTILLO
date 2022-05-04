//EJERCICIO 1:
#include <iostream>
#include <string>
using namespace std;
int main(){
    //creacion de arrays
    string nombres[100],apellidos[100];
    int edad[100], dni[100];

    for(int i=0; i<3; i++){
        cout<<"USUARIO "<<i+1<<endl;
        cout<<"NOMBRES: ";
        cin>>nombres[i];
        cout<<"\nAPELLIDOS: ";
        cin>>apellidos[i];
        cout<<"\nEDAD: ";
        cin>>edad[i];
        cout<<"\nDNI: ";
        cin>>dni[i];
    }
    cout<<"MOSTRAR USUARIOS"<<endl;
    for(int i=0; i<3; i++){
        cout<<" \nUSUARIO "<<i+1<<endl;
        cout<<"\nNOMBRES: "<<nombres[i]<<endl;
        cout<<"\nAPELLIDOS: "<<apellidos[i]<<endl;
        cout<<"\nEDAD: "<<edad[i]<<endl;
        cout<<"\nDNI: "<<dni[i]<<endl;
    }
}



//EJERCICIO 2:

#include <iostream>
using namespace std;
 //VARIABLE BOOLEANNA PARA COMPROBAR EXISTENCIA DE ELEMENTO EN ARRAY
bool busqueda(int lista[], int longitud, int numero) {
    for (int i = 0; i < longitud; i++) {
        int elemento = lista[i];
        if (elemento == numero) return true;
    }
    return false;
}

int main(){
    //CREACION DE ARRAY Y DE ENTERO
    int lista[8],numero;
    cout<<"INDICAR 8 DATOS EN LA LISTA"<<endl;
    //INGRESO DE DATOS DE LA LISTA
    for(int i=0;i<8;i++){
        cin>>lista[i];
    }

    cout<<"INDICAR NUMERO PARA BUSCAR "<<endl;
    //INGRESO DE NUMERO A BUSCAR
    cin>>numero;
    if(busqueda(lista,8,numero)==true){
        cout<<"NUMERO ENCONTRADO"<<endl;
    }
    else{
        cout<<"NUMERO NO ENCONTRADO"<<endl;
    }
}




//EJERCICIO 3:
#include <iostream>
using namespace std;
int main(){
    //creamos la matriz y sus variables
	int m[5][3];
	cout<<"Ingrese los 15 numeros de la matriz m[5][3]: \n";

	for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            cin>>m[i][j];

        }
        cout<<endl;

	}
	cout<<"Se muestran los numeros de la 2da y 4ta columna, y sus sumas solicitadas: ";
	int suma=0;
	for (int i=0;i<5;i++){

        for (int j=0;j<3;j++){
            if (i%2!=0){
                suma+=m[i][j];
                cout<<m[i][j]<<"\t ";


            }


        }

        if (i%2!=0){
            cout<<"La suma es " <<suma<<"\t";

            }
        suma=0;
        cout<<endl;

	}
}



//EJERCICIO 4
#include <iostream>
using namespace std;

int main(){
    //CREAMOS EL ARRAY DE 100 ELEMENTOS Y
    int a[100], posicion=0;

    for(int i=2;i<=100;i++){
        int aumentar=0;
        //i se ubica entre 2 y 100 puesto que 1 no es un numero primo
        for(int j=2;j<=i*(0.5);j++){
                //se comprueba si i es divisible por j considerando como limite superior, para j, la raiz de i, ya que si hasta este punto no se ha encontrado un divisor, no es necesario comprobar con numeros mayores a raiz de j
            if(i%j==0){
                aumentar++;
            }
        }
        //si los numeros no han encontrado divisores, se procede a llenar el array a
        if(aumentar<1){
            a[posicion]=i;
            posicion++;
        }
    }
    cout<<"NUMEROS PRIMOS EN ORDEN DESCENDENTE"<<endl;
    for(int i=24;i>=0;i--){
        cout<<a[i]<<endl;
    }
}




//EJERCICIO 5:
#include <iostream>
#include <string>
using namespace std;
int main() {

    string productos[100]={"arroz","pan","comino","ajo","cebolla","pasta","aceite","naranja","limon","rocoto"};
    float precios[100]={10.5,3,4,5,3,7,3,4,6.5,6};
    int stock[100]={4,3,4,5,3,7,3,4,6,6};
    int n;
    n=10;
    int a=0;
    string x;
    while (a != 5) {

    cout<<"Elige del 1 al 4:\n 1. Ingresar nuevo producto \n 2. Buscar producto \n 3. Modifique producto (stock y precio) \n 4. Mostrar informacion\n 5. Finalizar\n";

    cin>>a;
    switch(a) //donde opción es la variable a comparar
    {
        case 1: //Bloque de instrucciones 1;

            cout<<"Ingrese nombre, precio y stock: \n";
            cin>>productos[n];
            cin>>precios[n];
            cin>>stock[n];
            n++;

        break;

        case 2: //Bloque de instrucciones 2;

            cout<<"Ingrese nombre a buscar: \n";

            cin>>x;
            for (int i=0;i<n;i++){
                if (productos[i]==x){
                    cout<<"precio: ";
            cout<<precios[i]<<endl;
            cout<<"stock ";
            cout<<stock[i]<<endl;

                }
            }

        break;
        case 3: //Bloque de instrucciones 3;
            cout<<"Ingrese nombre a buscar: \n";
                        cin>>x;

   for (int i=0;i<n;i++){
                if (productos[i]==x){
                    cout<<"\n nuevo precio: ";
            cin>>precios[i];
            cout<<"\n nuevo stock: ";
            cin>>stock[i];

                }
            }
        break;
        case 4: //Bloque de instrucciones 3;
            cout<<"Los datos de la tienda son: \n";
            for (int i=0;i<n;i++)
            {
                cout<<productos[i]<<"\t";
            cout<<"precio: ";
            cout<<precios[i]<<"\t";
            cout<<"stock ";
            cout<<stock[i]<<endl;


            }


        break;

        case 5: //Bloque de instrucciones 3;
    {
        cout<<"Finalizado.";
    }




        break;


        //Nótese que valor 1 2 3 y 4 son los valores que puede tomar la opción
        //la instrucción break es necesaria, para no ejecutar todos los casos.
        }
  }


    }




//EJERCICIO 6
#include <iostream>
using namespace std;
int main(){
    //creamos la matriz y sus variables
	int m[3][3]={{4,13,14}, {4,5,6}, {7,8,9}};
	int f,c, sumafila;
	//imprimimos la matriz
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<m[f][c]<<" ";
		}
		cout<<endl;
	}
	//variable maximo que almacena la suma de cada fila
	int maximo=0;
	for(f=0;f<3;f++){

		sumafila=0;
		for(c=0;c<3;c++){
			sumafila=sumafila+m[f][c];
			if (sumafila>maximo){
                maximo=sumafila;
			}
		}

		cout<<"\nLa suma de la fila es "<<f<<" es: "<<sumafila;

	}
	cout<<"\n y la suma maxima es "<< maximo;
}






//EJERCICIO 7
#include <iostream>
using namespace std;
//FUNCION PARA ORDENAR FILAS
int reordenarfilas(int a, int b, int c, int m[3][3],int temp1[3]){
    for (int j=0;j<c;j++){
            temp1[j]=m[a][j];
            m[a][j]=m[b][j];
            m[b][j]=temp1[j];
        }

}
//FUNCION PARA ORDENAR COLUMNAS
int reordenarcolumnas(int a, int b, int f, int m[3][3],int temp2[3]){
    for (int i=0;i<f;i++){
            temp2[i]=m[i][a];
            m[i][a]=m[i][b];
            m[i][b]=temp2[i];
        }
}

//MAIN
int main(){
    //creamos la matriz y sus variables
	int m[3][3]={{4,13,14}, {4,5,6}, {7,8,9}};
	int temp1[3],temp2[3];
	int f,c, sumafila,a,b;
	//imprimimos la matriz
	 cout<<"Se muestra la matriz original : \n"
    ;

	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<m[f][c]<<" ";
		}
		cout<<endl;

	}

    cout<<"Elige :\n 1. Reordenar filas  2. Reordenar columnas \n"
    ;

    cin>>a;

    switch(a)
    {


        case 1: //Bloque de instrucciones ;
    {
        cout<<"Reordenar filas. ";
        cout<<"Seleccione las filas a reordenar (0,1 o 2): \n";
        cin>>a;
        cin>>b;
        //FUNCION REORDENAR FILAS
        reordenarfilas(a, b,c,m,temp1);

    }
        for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<m[f][c]<<" ";
		}
		cout<<endl;

	}
        break;

        case 2: //Bloque de instrucciones ;
    {
        cout<<"Reordenar columnas. ";
        cout<<"Seleccione las columnas a reordenar (0,1 o 2): \n";
        cin>>a;
        cin>>b;
        
        //FUNCION REORDENAR COLUMNAS
        reordenarcolumnas(a, b,c,m,temp2);
        for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<m[f][c]<<" ";
		}
		cout<<endl;

	}
      break;


        }
  }
	}


