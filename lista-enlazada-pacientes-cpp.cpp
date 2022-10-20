#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0
using namespace std;
struct nodo {
char cedula[10];
char nombre[10];
char piso[3];
char numCama[3];
char diagnostico[5];
struct nodo *sig;
};

void crear(nodo *pac)
{
cout<< "\nIngrese nombre del paciente o Escriba F para terminar: ";
cin>> pac->nombre;

if (strcmp(pac->nombre, "F") == 0)
pac->sig=NULL;
else {
cout<< "Ingrese cedula del paciente: ";
cin>> pac->cedula;
cout<< "Ingrese piso del paciente: ";
cin>> pac->piso;
cout<< "Ingrese numero de cama del paciente: ";
cin>> pac->numCama;
cout<< "Ingrese diagnostico del paciente 'C' = covid-19 'N' = sin covid-19: ";
cin>> pac->diagnostico;
pac->sig= new nodo;
crear(pac->sig);
}
return;
}

void imprimir(nodo *pac)
{

if (pac->sig != NULL) 
{
if(strcmp(pac->diagnostico, "C") == 0) { 
cout<<"\nNombre del paciente: "<<pac->nombre<<" - Piso: "<<pac->piso<<" - Numero de cama: "<<pac->numCama;
}

imprimir(pac->sig);
}

return;
}

int main()
{
nodo *pac;
pac= new nodo;
system("cls");
cout<< "\t\t\tPrograma de Listas Enlazadas "<<endl;
crear (pac);
cout<< "\nPacientes con Covid-19 "<<endl;
imprimir(pac);
getch();
}
