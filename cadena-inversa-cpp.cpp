#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string texto, reversa; //declaracion de variables
 
    
    cout << "Ingrese la cadena: ";
    getline(cin >> ws, texto); //lectura de cadena por getline
    
    reversa = texto; //copiar el contenido de texto en la varibable reversa
    
	reverse(reversa.begin(), reversa.end()); //se utiliza los funciones del include algorithm que permite saber si la variable reversa es igual de principio a fin 
    cout <<"Cadena en sentido inverso: "<<reversa;   

    return 0;
}
