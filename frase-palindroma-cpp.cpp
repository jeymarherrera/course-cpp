/**7. Codificar un programa C++ que lea una frase, y decida si es palíndroma. Una frase se dice que es palíndroma si después
de haber eliminado los blancos, se puede leer de igual forma en los dos sentidos.**/
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string texto; //declaracion de variables
    int aux = 0, igual = 0, i; //variables contadoras
    
    cout << "Ingrese la frase palindroma: ";
    getline(cin >> ws, texto); //lectura de cadena por getline
    
    for(i = texto.length() - 1; i >= 0; i--)  //ciclo for, 1. i inicializada por la longitud de la variable texto menos 1, 2. hasta que i sea mayor igual a 0, incremento del indice
	{
        if(texto[i] == texto[aux]) //condicion si letra del texto es igual a si misma
		{
            igual++; //incrementar el contador de igual
        }
        aux++; //incrementar la variable aux
    }
    
    if(texto.length() == igual) //si texto e igual son iguales entra a la condicion 
    {	
        cout << "La frase ingresada es palindroma " << endl;
    } 
	else 
	{
        cout << "La frase ingresada no es palindroma " << endl;
    }

    return 0;
}
