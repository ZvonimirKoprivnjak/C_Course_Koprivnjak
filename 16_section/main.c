#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   /*
    int num, potencija;
    printf("Unesi broj: ");
    scanf("%d", &num);
    printf("Unesi do koje potencije zelis ici: ");
    scanf("%d", &potencija);
    for (int i = 1; i <= potencija; i++)
    {
        printf("Broj %d na %d je %.2f.\n", num, i, pow(num,i));
    }

    int ocjena, prosjek, brojac, ukupno;
    ocjena = 1;
    brojac = 0;
    ukupno = 0;
    while (ocjena > 0)
    {
        printf("Unesi ocjenu koja ulazi u prosjek ako nemaš više ocjena unesi -1: ");
        scanf("%d", &ocjena);
        if (ocjena > 0)
        {
            brojac =  brojac + 1;
            ukupno = ukupno + ocjena;
        }
        else
            continue;

    }
    prosjek = (float)ukupno / brojac;

    printf("Prosjek iznosi: %d \n", prosjek);
    //DRUGI NACIN---------------------------------------------------------------------------------while- loops
    int ocjenaa, brojacc, ukupnoo;
    float  prosjekk;
    brojacc = 0, ukupnoo = 0;
    ukupnoo = 0;
    printf("Unesi ocjenu koja ulazi u prosjek ako nemaš više ocjena unesi -1: ");   //ovo dupliciranje koda nije bas uredu
    scanf("%d", &ocjenaa);
    while (ocjenaa!= -1)
    {
        brojacc =  brojacc + 1;
        ukupnoo = ukupnoo + ocjena;
        printf("Unesi ocjenu koja ulazi u prosjek ako nemas vise ocjena unesi -1: ");
        scanf("%d", &ocjenaa);

    }
    prosjekk = (float)ukupnoo / brojacc; //tu smo primjenili casting

    printf("Prosjek iznosi: %f \n", prosjekk);
    //TRECI NACIN-------------------------------------------do-while-loops
    int ocjena2, brojac2, ukupno2;
    float prosjek2;
    brojac2 = 0, ukupno2 = 0;

    do{  //osigurano nam je da kod izvrsi barem jednom prije provjere uvjeta!!
        printf("Unesi ocjenu koja ulazi u prosjek ako nemas vise ocjena unesi -1: ");
        scanf("%d", &ocjena2);
        brojac2 =  brojac2 + 1;
        ukupno2 = ukupno2 + ocjena2;

    }while (ocjena2!= -1);
    prosjek2 = (float)ukupno2 / brojac2; //tu smo primjenili casting

    printf("Prosjek iznosi: %.2f \n", prosjek2);


    //------------------------------------------------------------------------------
    int grade;
    do {
        printf("Unesi ocjenu izmeðu 1 i 5: ");
        scanf("%d", &grade);
    }while (grade < 1 || grade > 5);

    printf("Hvala! Unesena je dobra ocjena: %d.", grade);
      //----------------------------------------------------------------------------for petlja

    int num,i;

    printf("Unesi neki broj: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        printf("%d", i);
    }

    //------------------------------------------------------------------------------
    int number, pow, rezultat;
    printf("Unesi zeljeni broj: ");
    scanf("%d", &number);
    printf("Unesi zelejnu potenciju: ");
    scanf("%d", &pow);
    rezultat = 1;
    for (int i = 1; i <= pow; i++)
    {
        rezultat = rezultat * number;
    }
    printf("%d na %d iznosi: %d.", number, pow, rezultat);
      //------------------------------------------------------------------------------//ugnjezdene for petlje
    int n;
    printf("Unesi zeljenu duljinu trokuta: ");
    scanf("%d", &n);
    //ugnjezdene petlje
    for (int i = 1; i <= n; i++)
    {
        for (int j=1; j<=i; j++)
            printf("%d", j);
        printf("\n");
    }
    //------------------------------------------------------------------------------
    int n;
    printf("Unesi zelejnu duljinu trokuta: ");
    scanf("%d", &n);
    //ugnjezdene petlje
    for (int i = 1; i <= n; i++)
    {
        for (int j=1; j<=i; j++)
            printf("%d", i);
        printf("\n");
    }
    //------------------------------------------------------------------------------

    int broj_dana;
    int j = 0;
    int milion = 1000000;
    float pocetni_iznos, zarada;
    printf("Unesi iznos od kojeg kreces duplirati, 1Cent = 0.01 Eura: ");
    scanf("%f", &pocetni_iznos);

    zarada = pocetni_iznos;
    for (int i = 1; i <= 30; i++)
    {
        zarada = zarada * 2;
        if (zarada>milion && j==0)
        {
             printf("Da predes milion potrebno je %d dana i imat ces: %.2f \n", i, zarada);
            j++;
        }

    }
    printf("Ako svaki dan sljedecih 30 dana duplas svoj iznos %.2f, imat ces iznos od: %.2f. \n", pocetni_iznos, zarada);
    //------------------------------------------------------------------------------

    int n;
    printf("Unesi zeljeni broj: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        printf("%d,", i);
        if (i == n-1 )
        {
            printf("%d \n", n);
            break;
        }
    }
    for (int i = n; i > 1; i--)
    {
        printf("%d,", i);
        if (i == 2 )
        {
            printf("%d \n", 1);
            break;
        }
    }
    //------------------------------------------------------------------------------

      int numm, cilj;
      printf("Unesi broj koji zelis mnoziti: ");
      scanf("%d", &numm);
      printf("Unesi broj do kojeg zelis mnoziti: ");
      scanf("%d", &cilj);
      for (int i = 1; i <= cilj; i++)
      {
                  printf("%d * %d = %d \n", numm, i, numm*i);
      }
        //------------------------------------------------------------------------------

    int n;
    printf("Unesi zeljeni broj: ");
    scanf("%d", &n);
    for (int i = 1; i <= n-1; i++)
    //------------------------------------------------------------------------------
    */

    int n, i,broj, sum;
    sum = 0;
    i=1;

    printf("Unesi koliko znamenki zelis unijeti: ");
    scanf("%d", &n);

    do {
            printf("Unesi %d. broj: ", i);
            scanf("%d", &broj);
            if (broj % 2 == 0)
                sum = sum + broj;
            i++;


    }while(i<=n);

    printf("Suma parnih znamenki je: %d", sum);

    return 0;
}
