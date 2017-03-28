#include <iostream>

using namespace std;

int main()
{
    //Variables
    int a;
    int b= 0;


    //Body

    for (a =0; a<1000; a++)
    {
        if (a%3==0 || a%5==0)
            ////----///
            b+=a;
    }

    cout<<"La Sumatoria de los Multiplos es : " << b;


    return 0;
}

