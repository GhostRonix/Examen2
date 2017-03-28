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

    if (Cc[a]== '0')
    licount++;

    for (int a = 0; Cc[a] != '\1' ; a++)

    if (Cc[a]== '1')
    licount++;

     for (int a = 0; Cc[a] != '\2' ; a++)

    if (Cc[a]== '2')
    licount++;



    /**


    for (int a = 0; Cc[a] != '\4' ; a++)

    if (Cc[a]== '4')
    licount++;

    for (int a = 0; Cc[a] != '\5' ; a++)

    if (Cc[a]== '5')
    licount++;

    for (int a = 0; Cc[a] != '\6' ; a++)

    if (Cc[a]== '6')
    licount++;

    for (int a = 0; Cc[a] != '\7' ; a++)

    if (Cc[a]== '7')
    licount++;

    for (int a = 0; Cc[a] != '\8' ; a++)

    if (Cc[a]== '8')
    licount++;

    for (int a = 0; Cc[a] != '\9' ; a++)

    if (Cc[a]== '9')
    licount++;

    */



   cout<< "\nLa Cantidad de Digitos en la Cadena es: " << licount;



}
