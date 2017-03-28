#include <iostream>
#include <string.h>
#include <String>

using namespace std;

int main()
{
    ////Variables

   int licount = 0;
   char Cc[100];


   //Body

   cout<< "\n Ingrese una cadena de Caracteres: ";
   cin>> Cc;

   for (int a = 0; Cc[a] != '\0' ; a++)
   {

    if (Cc[a]== '0' || Cc[a]== '1' || Cc[a]== '2' || Cc[a]== '3' || Cc[a]== '4' || Cc[a]== '5' || Cc[a]== '6' || Cc[a]== '7' || Cc[a]== '8' || Cc[a]== '9' ||)
    licount++;

   }





   cout<< "\nLa Cantidad de Digitos en la Cadena es: " << licount;



}
