#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
/*Crear una matriz cuadrada de números enteros de FxC.  Siendo F y C declaradas como constantes.
Calcular:
- Promedio general de la matriz.
- Suma de pares de cada columna
- Suma de impares de cada fila
- Posición máximo
- Posición mínimo
- Ordenar de forma ascendente la fila 2
- Ordenar en forma descendente la columna 3
-  Intercambiar la 2 y 4 columna*/
int main(){
	const int f=4,c=4;
	int m[f][c],suma=0,pares=0,impares=0,mayor=0,fila,columna;
	int columna_m,fila_m,menor=100,aux;
	int aux2;
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			m[i][j]= 1+ rand()%100;
			cout<<m[i][j]<<"\t";
			
		/*- Promedio general de la matriz.*/
			suma+=m[i][j];
		/*- Suma de pares de cada columna*/	
			if(m[i][j]%2==0){
				pares+=m[i][j];
			}
		/*- Suma de impares de cada fila*/
			 if(m[i][j]%2!=0){
				impares+=m[i][j];
			}
		/*- Posición máximo*/
			if(m[i][j] >mayor){
				mayor=m[i][j];
				fila=i;
				columna=j;	
			}
		/*- Posición mínimo*/
			if(m[i][j] < menor){
				menor=m[i][j];
				fila_m=i;
				columna_m=j;
			}
	}
	cout<<endl;
}
	cout<<"la suma general de la matriz es:"<<suma<<endl;
	cout<<"el promedio general de la matriz es:"<<suma/16<<endl;
	cout<<"la suma de pares de cada columna es:"<<pares<<endl;
	cout<<"la suma de los impares de cada columna es:"<<impares<<endl;
	cout<<"la pocision maxima es:"<<mayor<<" en la fila:"<<fila <<" en la columna:"<<columna <<endl;
	cout<<"la pocision minima es:"<<menor<<" en la fila:"<<fila_m <<" en la columna:"<<columna_m <<endl;
	
/*- Ordenar de forma ascendente la fila 2*/
	for(int  i=0;i<c;i++){
		for(int j=0;j < c;j++){	
			if(m[2][j] > m[2][j+1]){	
				aux = m[2][j];
				m[2][j] = m[2][j+1];
				m[2][j+1]= aux ;
			}
		}
	}
		
		cout<<"la fila 2 ordenada de forma ascendente"<<endl;
		for(int  i=0;i<c;i++){
			for(int j=0;j < c;j++){
				cout<<m[i][j]<<"\t";
			}
		cout<<endl;
	}
/* - Ordenar en forma descendente la columna 3*/
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			if(m[j][3]<m[j+1][3]){
				aux = m[j][3];
				m[j][3]=m[j+1][3];
				m[j+1][3] = aux;
			}	
		}
	}
	
	cout<<"la columna 3 ordenada en forma descendente"<<endl;
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				cout<<m[i][j]<<"\t";
			}
			cout<<endl;
		}
	
/* -  Intercambiar la 2 y 4 columna*/	
		for(int j=0;j<c;j++){
			aux2 = m[j][1];
			m[j][1]=m[j][3];
			m[j][3] = aux2;				
		}	
			
	cout<<"la nuevamatriz con el intercambio de posiciones de la columna 2 y 4"<<endl;		
		for(int i=0;i<c;i++){
			for(int j=0;j<c;j++){
				cout<<m[i][j]<<"\t";
			}
			cout<<endl;
		}
	
	
	
	
	
	
	system("pause");
	getch();
	return 0;


}
