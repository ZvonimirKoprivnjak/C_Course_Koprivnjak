#include <stdio.h>
#include <stdlib.h>

int main()
{
    const age = 35; //const int age = 35;

    const int *ptr;
    int x = 10;
    int y = 20;

    ptr = &x;  // Dozvoljeno: postavljanje pokaziva�a na adresu `x`.
    //*ptr = 15; // Gre�ka: ne mo�ete menjati vrednost na koju pokazuje `ptr`.  ERROR

    ptr = &y;  // Dozvoljeno: pokaziva� mo�e promeniti adresu na koju pokazuje.

    const int *const ptr2;  // Pokaziva� na konstantan `int`, a i pokaziva� je konstantan.


    return 0;
}
