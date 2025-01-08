#include <stdio.h>
#include <stdlib.h>

//Counting Arrays

#define SIZE 8

int main()
{
    // brojimo koliko ima 0,1 i 2 u polju brojeva
    int arr[SIZE] = { 0,2,0,1,0,0,2,0};
    int countArr[3] = {0};
    int i;

    for (i = 0; i<SIZE; i++)
    {
        countArr[arr[i]]++;
    }
    // sad znamo koliko ima nula, jedinica i dvojki

    //-------------------------------------------------
    // brojimo koliko ima 0,1,2,3,4 i 2 u polju brojeva
    int arrr[SIZE] = { 0,5,4,2,1,3,2,0};
    int countArrr[6] = {0};
    int j;

    for (j = 0; j<SIZE; j++)
    {
        countArrr[arrr[j]]++;
    }

    //-------------------------------------------------
    int array[20] = {0,5,4,9,5,8,2,3,1,5,4,9,5,5,2,7,6,5,4,1};
    int countArray[10] = {0};
    int k, l;
    int max_pojava = 0;  // odmah pretpostavljamo da se broj nula pojavljuje najvise

    for ( k= 0; k<20; k++)
        countArray[array[k]]++;

    for (l=1; l<10;l++)
        if (countArray[max_pojava]<countArray[l])
            max_pojava = l;

    printf("Vrijednost %d se najvise pojavljuje i to ukupno %d puta.\n", max_pojava, countArray[max_pojava]);
    // u prethodna tri slucaja indexi su se poklapali s nasim vrijednostima u poljima brojeva

    //-------------------------------------------------
    // MAPPING
    // sto ako nam se vrijednosti ne krecu s obzirom na index-e u countArray
    int array1[10] = {7,5,6,9,6,7,10,7};  // vidimo da brojevi idu od [5-10]
    int countArray1[6] = {0};
    int h,p;
    int max_pojava1 = 0;

    for (h = 0; h < 8; h++)
        countArray1[array1[h]-5]++;

    for (p=1; p<6;p++)
        if (countArray1[max_pojava1]<countArray1[p])
            max_pojava1 = p;

    printf("Vrijednost %d se najvise pojavljuje i to ukupno %d puta.\n", max_pojava1+5, countArray1[max_pojava1]);

    //-------------------------------------------------
    int array_letter[8] = {'k','i','b','r','c','k','z','m'};
    printf("%d \n", 'a');   //97    A->65
    printf("%d\n", 'z');    //122   Z->90
    int broj_slova = 26;
    int countArray_letter[26] = {0};
    int u,q;
    int max_pojava_letter = 0;

    for (u=0; u<8; u++)
        countArray_letter[array_letter[u]-97]++; //countArray_letter[array_letter[u]-'a']++;
        //countArray_letter[array_letter[u]-65]++; //countArray_letter[array_letter[u]-'A']++; ZA VELIKA SLOVA
    for (q=1; q<broj_slova;q++)
        if (countArray_letter[max_pojava_letter]<countArray_letter[q])
            max_pojava_letter = q;

    printf("Vrijednost %c se najvise pojavljuje i to ukupno %d puta.\n", max_pojava_letter+97, countArray_letter[max_pojava_letter]);
    //printf("Vrijednost %c se najvise pojavljuje i to ukupno %d puta.\n", max_pojava_letter+65, countArray_letter[max_pojava_letter]);

    //-------------------------------------------------
    //velika i mala slova trazimo kojeg slova ima najvise
    int array_letter1[8] = {'t','A','t','t','A','t','A','m'};
    printf("%d \n", 'a');   //97    A->65
    printf("%d\n", 'z');    //122   Z->90
    int broj_slova1 = 52;
    int countArray_letter1[52] = {0}; // od 0-25 mala slova od 26 do 51 velika slova
    int r,t;
    int max_pojava_letter1 = 0;
    for (r=0; r<8; r++)
        if (array_letter1[r]-97 >= 0)  //if (array_letter1[r] >= 'a' && array_letter1[r] <= 'z')
            countArray_letter1[array_letter1[r]-97]++; //countArray_letter[array_letter[u]-'a']++;
        else                            //else if (array_letter1[r] >= 'A' && array_letter1[r] <= 'Z')
            countArray_letter1[array_letter1[r]-65+26]++;

    for (t=1; t<broj_slova1;t++)
        if (countArray_letter1[max_pojava_letter1]<countArray_letter1[t])
            max_pojava_letter1= t;

    if (max_pojava_letter1<26)
        printf("Vrijednost %c se najvise pojavljuje i to ukupno %d puta.\n", max_pojava_letter1+'a', countArray_letter1[max_pojava_letter1]);
    else
        printf("Vrijednost %c se najvise pojavljuje i to ukupno %d puta.\n", max_pojava_letter1+'A'-26, countArray_letter1[max_pojava_letter1]);



    return 0;
}
