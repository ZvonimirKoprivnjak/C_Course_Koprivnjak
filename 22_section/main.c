#include <stdio.h>
#include <stdlib.h>



void swap_function(int num1, int num2)
{
    int temp;
    printf("Broj 1 prije zamjene: %d \n", num1);
    printf("Broj 2 prije zamjene: %d \n", num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Broj 1 nakon zamjene: %d \n", num1);
    printf("Broj 2 nakon zamjene: %d \n", num2);
}

void swap_function2(int num1, int num2) //u ovome slucaju mi u funkciju kopiramo stvarne vrijednosti a i b to nisu direktno a i b
// ova funkcija nema nikakve koristi
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

//void swap_function_POINTERS()
//----------------------------------------------------------------
// klasicno trazenje maksimuma minimuma
int findMax(int num1, int num2)
{
    if (num1>num2)
        return num1;
    else
        return num2;
}
int findMin(int num1, int num2)
{
    if (num1>num2)
        return num2;
    else
        return num1;
}
    //Zajednicka funkcija
int findMinMax(int num1, int num2)
{
    int min, max;
    if (num1>num2)
    {
        min = num2;
        max = num1;
    }
    else
    {
        min = num1;
        max = num2;
    }
    return min, max;     //OVA FUNKCIJA NE FUNKCIONIRA JER NE MOZEMO VRACATI DVIJE VRIJEDNOSTI U C-u U OYTHONU JE TO MOGUCE
}
    // pomocu pointer-a modify by reference
void findMinMaxPointer(int num1, int num2, int *pMax, int *pMin)
{
    if(num1>num2)
    {
        *pMin = num2;
        *pMax = num1;
    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
    //nije potrebno nikakvo vracanje
}



int main()
{   /*
    swap_function(2,3);
    //----------------------------------------------------------------
    int a = 5, b = 7;
    printf("Broj 1 prije zamjene: %d \n", a);
    printf("Broj 2 prije zamjene: %d \n", b);
    swap_function2(a,b);                        //s obzirom da nemamo return neæe se nista dogoditi ako pozovemo ovu funkciju
    printf("Broj 1 nakon zamjene: %d \n", a);
    printf("Broj 2 nakon zamjene: %d \n", b);
    //----------------------------------------------------------------
    //Pointer pokazuje na adresu varijable

    int z=5;
    int *p;

    p = &z;  //u varijablu p smo spremili adresu varijable a

    //ispis adrese
    printf("%p \n", &z); //000000000061FE0C

    printf("%p \n", p); //000000000061FE0C i jedan i drugi daju istu adresu

    //ISPIS VRIJEDNOSTI VARIJABLE
    printf("%d \n", a);
    printf("%d \n", *p);  // pristup preko pointera

    //----------------------------------------------------------------
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    printf("num1 = %d, num2 = %d\n", num1, num2); //5,7

    ptrA = &num1;   // pointerima pridjelili adrese brojeva
    ptrB = &num2;

    printf("num1 = %d, num2 = %d\n", num1, num2);   //5,7

    *ptrA = *ptrA +1; //5+1
    *ptrB = *ptrB +3;   //7+3

    printf("num1 = %d, num2 = %d\n", num1, num2);   //6,10

    ptrA = ptrB;    // ptrA -> num2, ptrB->num2
    ptrB =ptrA;     // ptrB -> num2

    printf("num1 = %d, num2 = %d\n", num1, num2); //6,10
    printf("*ptrA = %d, *ptrB = %d \n", *ptrA, *ptrB); //10,10

    num1 = *ptrB;
    num2 = num1 - 3;

    printf("num1 = %d, num2 = %d\n", num1, num2); //10,7
    */
    //----------------------------------------------------------------


    int k=5, l=7;
    int max, min;
    max = findMax(k,l);
    printf("Max je %d \n", max);
    min = findMin(k,l);
    printf("Min je %d \n", min);

    //koristenje pointera;
    int MIN,MAX;
    findMinMaxPointer(k,l,&MIN,&MAX);  //saljemo adrese u funkciju koje loviju pointeri pMax i pMin
    printf("Max je %d \n", MAX);
    printf("Min je %d \n", MIN);







    return 0;
}
