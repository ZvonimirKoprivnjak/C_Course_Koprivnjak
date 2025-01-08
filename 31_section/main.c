#include <stdio.h>
#include <stdlib.h>

int main()
{
    const age = 35; //const int age = 35;

    const int *ptr;
    int x = 10;
    int y = 20;

    ptr = &x;  // Dozvoljeno: postavljanje pokazivaèa na adresu `x`.
    //*ptr = 15; // Greška: ne možete menjati vrednost na koju pokazuje `ptr`.  ERROR

    ptr = &y;  // Dozvoljeno: pokazivaè može promeniti adresu na koju pokazuje.

    const int *const ptr2;  // Pokazivaè na konstantan `int`, a i pokazivaè je konstantan.


    return 0;
}
