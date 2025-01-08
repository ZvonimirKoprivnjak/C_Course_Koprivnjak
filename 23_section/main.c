#include <stdio.h>
#include <stdlib.h>

#define SIZEDATUM 3
#define SIZEPALI 4
#define SIZESUM 6
#define SIZESORT 6
#define SIZEUNIQ 10
#define SIZEROTACIJA 5

int sumofArray(int *pArr, int size);        //deklaracija funkcije potrebna ako funkciju definiramo nakon main programa


int main()
{
    /*
    int arrayDatum[SIZEDATUM] = {12,12,2024};
    int arrayDatumKopija[SIZEDATUM];

    //arrayDatumKopija = arrayDatum; ovo ni ne pomisljati

    for (int i = 0; i < SIZEDATUM; i++)
    {
        arrayDatumKopija[i] = arrayDatum[i];
        printf("%d", arrayDatumKopija[i]);
        if (i==2)
            break;
        printf(",");
    }
    printf("\n");

    //-----------------------------------------------------------------------------
    //Palindrome

    //[1,3,2,3,1] --> palindrome
    //[1,2,3,3,2,1] --> palindrome
    //[1,4,6,2] --> not a palindrome

    int i;
    int flag = 1; //pretpostavka da je polje palindrome
    int arrayPALI[SIZEPALI]= {1,4,6,2};

    for ( i = 0; i < (SIZEPALI/2); i++)
    {
        if(arrayPALI[i] != arrayPALI[SIZEPALI-1-i])
        {
            flag = 0;
            break;
        }

    }
    if (flag==1)
        printf("Polje je Palindrome \n");
    else
        printf("Polje nije Palindrome \n");
    //-----------------------------------------------------------------------------
    // ispis najveæe sume dva susjedna elementa polja
    int arraySUM[SIZESUM] = {1,2,5,2,7,1};
    int sum, k, max = arraySUM[0]+arraySUM[1], indeks;


    for (k = 1; k < (SIZESUM-1); k++)
    {
        sum = arraySUM[k] + arraySUM[k+1];
        if (sum > max)
        {
            max=sum;
            indeks = k;
        }
    }
    printf("Najveca suma dva susjedna broja je: %d + %d = %d \n", arraySUM[indeks],arraySUM[indeks+1], max);


    //-----------------------------------------------------------------------------
    //program koji traži od korisnika da unese integre u polje i zatim program ispita ako je polje sortirano ili ne
    //[1,2,5,7,10] --> really sorted
    //[1,2,2,5,10] --> sorted
    //[1,2,5,3,10] --> not sorted

    int polje[SIZESORT] ;
    int i, flag = 2; // krecemo s pretpostavkom da su dobro sortirani
    for (i = 0; i<SIZESORT; i++)
    {
        printf("Unesi %d. element polja:",i+1);
        scanf("%d", &polje[i]);
    }
    //provjera sortiranja
    for (i = 0; i<SIZESORT-1; i++)
    {
        if (polje[i]>polje[i+1])
        {
            flag = 0;
            break;
        }
        else if (polje[i]==polje[i+1])
        {
            flag = 1;  // tu ne smije break jer se moze pojaviti da nakon sto prode taj par bude neki di nije sortirano
        }

    }
    //ispis rjesenja
    if (flag==2)
        printf("dobro sortirano");
    else if (flag==1)
        printf("sortirano");
    else if (flag==0)
        printf("nije sortirano");

    //-----------------------------------------------------------------------------
    // trazimo unikatne elemente polja
    int poljeUNIQ[SIZEUNIQ] ;
    int z,p, flag = 1;
    int brojac=0;
    //unos elemenata polja
    for (z = 0; z<SIZEUNIQ; z++)
    {
        printf("Unesi %d. element polja:",z+1);
        scanf("%d", &poljeUNIQ[z]);
    }
    //kontrola elemenata polja
    for (z = 0; z<SIZEUNIQ; z++)
    {
        flag = 1;
        for (p = 1; p<SIZEUNIQ; p++)
        {
            if (p==z)
                continue;
            if (poljeUNIQ[z] == poljeUNIQ[p])
            {
                flag = 0;
                break;
            }
        }
        if (flag==1)
        {
            printf("Unikatni element polje: %d \n", poljeUNIQ[z]);
            brojac++;
        }
    }
    printf("Broj unikatnih brojeva: %d", brojac);

    //-----------------------------------------------------------------------------
    // trazimo neunikatne elemente polja
    int poljeUNIQ[SIZEUNIQ] ;
    int z,p, flag = 0;
    int brojac=0;
    //unos elemenata polja
    for (z = 0; z<SIZEUNIQ; z++)
    {
        printf("Unesi %d. element polja:",z+1);
        scanf("%d", &poljeUNIQ[z]);
    }
    //kontrola elemenata polja
    for (z = 0; z<SIZEUNIQ; z++)
    {
        flag = 0;
        for (p=0; p<z; p++)  //u ovome dijelu provjeravamo jesmo li mozda vec imali taj clan
        {
            if (poljeUNIQ[z] == poljeUNIQ[p])
            {
                flag = 1;
                break;
            }
        }
        if (flag==1)
            continue;
        else
            for (p=z+1; p<SIZEUNIQ; p++)
            {
                if (poljeUNIQ[z]==poljeUNIQ[p])
                {
                    printf("Non-unique vrijednost: %d \n", poljeUNIQ[z]);
                    brojac++;
                    break;
                }
            }
    }
    printf("Broj ne-unikatnih brojeva: %d \n", brojac);

    //-----------------------------------------------------------------------------
    //rotacija polja za jedno mjesto u lijevo
    int poljeRotacija[SIZEROTACIJA]= {1,2,3,4,5};
    int temp = poljeRotacija[0];

    for (int i = 1; i < SIZEROTACIJA; i++)
    {
        poljeRotacija[i-1]= poljeRotacija[i];
    }
    poljeRotacija[SIZEROTACIJA-1]=temp;

    //rotacija za n mjesta
    int poljeRotacija2[SIZEROTACIJA] = {1,2,3,4,5};
    int n=2;

    for (int f = 0; f<n; f++)
    {
        int temp = poljeRotacija2[0];
        for (int i = 1; i < SIZEROTACIJA; i++)
        {
            poljeRotacija2[i-1]= poljeRotacija2[i];
        }
        poljeRotacija2[SIZEROTACIJA-1]=temp;
    }

    for (int i = 0; i < SIZEROTACIJA; i++)
        printf("%d ", poljeRotacija2[i]);

    //-----------------------------------------------------------------------------
    //rotacija polja za jedno mjesto u desno
    int poljeRotacija[SIZEROTACIJA]= {1,2,3,4,5};
    int temp = poljeRotacija[SIZEROTACIJA];

    for (int i = 0; i < SIZEROTACIJA; i++)
    {
        poljeRotacija[i+1]= poljeRotacija[i];
    }
    poljeRotacija[0]=temp;

    //rotacija za n mjesta
    int poljeRotacija2[SIZEROTACIJA] = {1,2,3,4,5};
    int n=2;

    for (int f = 0; f<n; f++)
    {
        int temp = poljeRotacija2[SIZEROTACIJA-1];
        for (int i = SIZEROTACIJA; i >= 0; i--)
        {
            poljeRotacija2[i]= poljeRotacija2[i-1];
        }
        poljeRotacija2[0]=temp;
    }

    for (int i = 0; i < SIZEROTACIJA; i++)
        printf("%d ", poljeRotacija2[i]);
    */
    //-----------------------------------------------------------------------------
    int arr[3]= {1,2,3};
    int rezz;
    rezz = sumofArray(arr,3);
    printf("Suma je: %d", rezz);
    return 0;
}



int sumofArray(int *pArr, int size)
{
    int i;
    int sum = 0;
    pArr[1] = 10;
    for (i = 0; i< size; i++)
    {

        sum = sum + pArr[i];
    }
    return sum;
}
