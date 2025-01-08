#include <stdio.h>
#include <stdlib.h>
//Arrays
//DEKLARACIJA: tip_podatka_u_polju naziv_polja[velicina_polja];
//PRIMJER: int grades[5];

//INICIJALIZACIJA:      int grades[3] = {3, 5, 4};              3,5,4
                    //  float bArr[3] = {3.4, 5.6, 2.1};        3.4,5.6,2.1
                    //  int arr[5] = {0};                       0,0,0,0,0
                    //  int arr[5] = {1,2};                     1,2,0,0,0

//PRISTUP ELEMENTIMA:  Index 1. elementa je 0 arr[0]
// PREPROCESROSKA DIREKTIVA #define ime vrijednost
#define velicina 7
#define SIZE 5

int main()
{   /*
    int tesetArray[] = {2,5,3,7,10};
    int drugi_element = tesetArray[1]; //drugi_element = 5
    tesetArray[4] = 8;                 // 2,5,3,8,10
    printf("%d \n", tesetArray[0]);       // ispis drugog elementa
    //---------------------------------------------------------------------------------
    //minimalna ocjena
    int grades[5];
    int i;
    int lower_grades;

    for (i = 0; i<5; i++)
    {
        printf("Unesi %d. ocjenu: ", i+1);
        scanf("%d", &grades[i]);
    }
    lower_grades = grades[0];

    for (i = 1; i<5; i++)
    {
        if (lower_grades>grades[i])  // ako bi htjeli maksimalnu onda samo lower_grades>grades[i]
        {
               lower_grades = grades[i];
        }
    }
    int velicina_polja = sizeof(grades)/sizeof(grades[0]); // u ovom slucaju imamo int i svaki element ima 4 bajta sto je 32 bita
                                                            // 5 elemnata dati ce nam 20 bajta
    printf("Najmanja ocjena je %d.\n", lower_grades);
    printf( "Polje ima %d elemenata. \n", velicina_polja);
    //-------------------------------------------------------------------------------------
    //koristenje preprocesorske direktive #define velicina 7
    int arr[velicina];
    int j, maxIndeks;

    for (j = 0; j<velicina; j++)
    {
        printf("Unesi broj %d: ", j+1);
        scanf("%d", &arr[j]);
    }
    maxIndeks = 0;
    for (j = 1; j<velicina; j++)
    {
        if (arr[j]>arr[maxIndeks])
            maxIndeks = j;
    }
    printf("Indeks maksimalne znamenke je: %d\n", maxIndeks);  */
    //-----------------------------------------------------------------------
    // odredivanje dobih susjeda dobri susjedi su ako umnozak lijevog i desnog clana daje taj broj  [1,3,2,6,3] ima dobre susjede na mjestu 2,6,3 2*3=6
    int myarr[SIZE];
    int i;
    int imaDobreSusjede = 0;  //pomocna varijabla

    for (i = 0; i<SIZE; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d",&myarr[i]);
    }
    for (i = 1; i < SIZE-1; i++)
    {
        if ( myarr[i] == myarr[i-1] * myarr[i+1])
        {
            printf("Polje ima dobre susjede! \n");
            imaDobreSusjede = 1;
            break;  // ako pronademo jedan dobar rezultat prekidamo petlju da ne vrtimo bespotrebno do kraj petlju
                    // ili mozemo samo staviti return 0; i prekinuti cijeli main onda nam nije potrebna pomocna varijabla
        }
    }
    if (imaDobreSusjede == 0)
        printf("Ovo polje nema dobre susjede! \n");

    return 0;
}
