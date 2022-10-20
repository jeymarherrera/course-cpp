#include <iostream>
#include <string>

using namespace std;
int main()
{
	 int i, con=0 ;
        string cadena, palabra="";

        cout <<"Ingrese la cadena a evaluar, por favor ingrese un espacio al final: ";
        getline(cin >> ws, cadena); 	
        cout <<"\n";
        for(i=0;i<cadena.length();i++){
            if(cadena[i]!=' '){
			cout <<cadena[i]; 
			con++; 	 			
            }		
            else if (cadena[i]==' '){ 
			cout <<"\nLa cadena contiene "<<con<<" letras\n"; 
			con=0;
            }
        }
     
    }


