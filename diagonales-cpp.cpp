#include "iostream"
#include "conio.h"
using namespace std;
int main()
  {
  char mat[5][5];
  int i,j,k;
  char aux;
  cout<<"\n \n \t Intercambio de la Diagonal Principal por la Diagonal Secundaria\n \n";
    cout<<"\n  \t \t \t \t INGRESE LA MATRIZ \n \n";
  for (i=1;i<=5;i++)
  {
   for (j=1;j<=5;j++)
   {
     cout<<"\t \t \t Valor en la posicion  " <<"( "<<i <<" , ";
     cout<<j <<" )"<<"\t";
       cin>>mat[i][j];
   }
  }
  //IMPRIME MATRIZ
cout<<"\n \t \t \t \t\tMATRIZ  5x5 \n \n";
for (i=1;i<=5;i++)
 {
 cout<<"\n \t \t \t ";
   for (j=1;j<=5;j++)
   {
        cout<<mat[i][j]<<"\t";
   }
 }


//Intercambia diagonales principales x secundaria
 cout<<"\n\n\t \t \t \tIntercambio de diagonales \n \n";
k=5;
 for (i=1;i<=5;i++)
 { 
   for (j=1;j<=5;j++)
   {
   
    
		
	aux=mat[i][k];
	 cout<<"\n \t \t \t "<<aux<<" .";
   mat[i][k]=mat[i][j];
    cout<<"\n \t \t \t "<<mat[i][k]<<"\t";
   mat[i][j]=aux;
    cout<<"\n \t \t \t "<<mat[i][j]<<"\t";
   k--;
     cout<<"\n \t \t \t "<<k<<" ,";
    
   }
}
   // IMPRIME MATRIZ RESULTANTE
    for (i=1;i<=5;i++)
 {
  cout<<"\n \t \t \t ";
   for (j=1;j<=5;j++)
   {
        cout<<mat[i][j]<<"\t";
   }
 }
getch();
}
