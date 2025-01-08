#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------------------
//  1
// Recursion Practice
// Develop a recursive function that receives:
//- an integer value "total".
//
//- an integer value "numi".
//
//- an integer value "num2".
//
// The function should print a sequence of "total" numi's and then a sequence of
// "total" of num's.
//
// For example:
//
//"total = 3, num1 = 2, num = 4% --> 222444
//
//"total = 2, num1 = 3, num = 5" --> 3355

void ispisBroja(int total, int num1, int num2)
{
    if (total > 0)
    {
        printf("%d",num1);              //ovo se izvrsava prije poziva rekurzije
        ispisBroja(total-1, num1, num2);
        printf("%d", num2);             //ovo se izvrsava nakon sto se ispuni bazni uvjet
    }

}
//------------------------------------------------------------
//  2
// Recursion Practice
// Develop a recursive function that receives:
//
//- an integer value "total".
//
//- a character "val" (representing a lowercase character) r'a' - 'Z'
//
// The function should print a sequence of "total" lowercase "vals" and then a sequence
// of "total" uppercase "vals"
//
// For example:
//"total = 3, val = 'c' --› сссССС
//"total = 2, val = 'b' --> bbBB
void ispisSlova( int num, char slovo)
{
    if (num > 0)
    {
        printf("%c", slovo);
        ispisSlova(num-1, slovo);
        printf("%c", slovo-'a'+'A');
    }
}
//------------------------------------------------------------
//  3
// Exercise
// Develop a recursive function that receives an integer num.
// The function should observe the digits (from left to right) and return:
//
// 1, if they are very ascending.
//
//-1, if they are very descending.
//
// 0, otherwise.
//
//Assumptions:
//- Initial "num" is of 2+ digits. (num >= 10) •
//- All digits in "num" are different (no pair of digits are the same). All different
//
// For example:
//"124" --> 1
//"12342" --> 0
//"9643" --> -1

int provjeraRedosljeda(int num)
{
    int jedinica  = num % 10;
    int desetice = (num / 10 ) %10;
    int sortSoFar;
    if (num < 100)
    {
        if (desetice < jedinica)
            return 1;
        else
            return -1;
    }
    sortSoFar = provjeraRedosljeda( num/10 );
    if (sortSoFar == 1 && desetice < jedinica)
        return 1;
    if (sortSoFar == -1 && desetice > jedinica)
        return -1;
    return 0;
}
//------------------------------------------------------------
//  4
// Exercise //
// Develop a recursive function that receives an integer num and a digit.
// The function should return:
//
//-Ao if the count of "digit" occurences in num is even.
//
//- 0, otherwise (if the number of "digit" occurences in num is odd).
//
// For example:
//
//num = 124, digit = 2 --> 0 (1 occurence - odd)
//
//num = 12342, digit = 2 --› 1 (2 occurences - even)
//11
//num = 10200240, digit = 0 --> 1 (4 occurences - even)
int brojenje(int num , int broj)
{
    int pojavljivanje;
    if (num < 10)
        if (num == broj)
            return 0;
        else
            return -1;
    pojavljivanje = brojenje(num /10, broj);

    if (pojavljivanje == 0 && num % 10 == broj)
        return 1;
    else if (pojavljivanje == 1 && num % 10 == broj)
        return 0;
    else if (pojavljivanje == -1 && num % 10 == broj)
        return 0;
    else
        return pojavljivanje;
}

int main()
{
    /*
    //  1
    int total, num1, num2, broj;
    printf("Unesi zeljeni broj ponavljanja brojeva: ");
    scanf("%d", &total);
    printf("Unesi prvi broj koji zelis da se ponavlja: ");
    scanf("%d", &num1);
    printf("Unesi drugi broj koji zelis da se ponavlja: ");
    scanf("%d", &num2);
    ispisBroja(total,num1,num2);
    //------------------------------------------------------------
    //  2
    ispisSlova(3 , 'z');
    //------------------------------------------------------------
    //  3
    provjeraRedosljeda(9643);
    provjeraRedosljeda(124);
    provjeraRedosljeda(12342); */
    //------------------------------------------------------------
    //  4
    int broj = brojenje(10200240, 0);
    printf("%d \n", broj);
    return 0;
}
