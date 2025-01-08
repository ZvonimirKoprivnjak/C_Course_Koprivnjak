#include <stdio.h>
#include <stdlib.h>

//funkcija za izracun povrsine
float povrsinaPravokutnika( float a, float b)
{
    float povrsina;
    povrsina = a * b;
    return povrsina;
}
//----------------------------------------------------------------------------------------------------
//maksimum broj u dvoznamenkasom broju
void maksDvoz(int broj)
{
    if (broj/100 == 0 && broj/10 != 0)  // moguce samo staviti interval
    {
        int jedinica = broj%10;
        int desetinka = broj/10;
        if (jedinica>desetinka)
            printf("Maksimalni broj unutar dvoznamenkastog broja je: %d", jedinica);
        else
            printf("Maksimalni broj unutar dvoznamenkastog broja je: %d", desetinka);
    }
    else
        printf("Nije unesen dvoznamenkasti broj!!");
}
//----------------------------------------------------------------------------------------------------
int faktorijel(int broj2)
{
    int fak = 1;
    if (broj2<0)
        return -1;
    while(broj2!=0)
    {
        fak = fak * broj2;
        broj2 = broj2 - 1 ;
    }
    return fak;
}
//----------------------------------------------------------------------------------------------------
long nizDevetki(int broj1);  //deklaracija funkcije

long jedandopet( int broj)
{
    long rezultat = 0;
    if (broj<=5)
    {
        for (int i = 1; i<=broj; i++)
        {
            rezultat = rezultat*10 + i;
        }
    }
    else
    {
        rezultat = nizDevetki(broj);
    }
    return rezultat;
}

long nizDevetki(int broj1)
{
    long rezultat = 0;
    for (int i = 1; i<=broj1; i++)
    {
        rezultat = rezultat*10 + 9;
    }
    return rezultat;
    // kad je broj 9 moguæe je maksimalno 9 devetki ispisati zbog 32 bitnog zapisa kojem je makss vrijednost 2 147 483 647
    // iz tog razloga kad je broj 1 onda je moguæe ispisati 10 jedinica
}
//----------------------------------------------------------------------------------------------------
// iz velikog slova u malo i obratnu
char toUpper(char znak); //deklaracija funkcije

char toLower(char znak)
{
    if (znak >= 'A' && znak <= 'Z')
        return znak - 'A' + 'a';  //radi s integer(znak) - 65 +97
    else
        return toUpper(znak);  //poziv druge funkcije
}

char toUpper(char znak)
{
    return znak - 'a' + 'A'; //radi s integer(znak) - 97 +65
}
//----------------------------------------------------------------------------------------------------
//suma djelitelja
int sumaDjelitelja(int broj)
{
    int suma = 0;
    int hold_broj = broj;
    while (broj!=0)
    {
        if (hold_broj%broj == 0)
        {
            suma = suma + broj;
        }
        broj--;
    }
    return suma;
}       //optimizacija ovoga bi bila da ne pregledavamo sve clanove vec od prvog do polovice i uzmemo zadnjeg jer sam sa sobom je dijeljiv smanjit ce se vrijeme pregleda
//dodatno optimizirano
int optimiziranaSumaDjelitelja(int broj)
{
    int sum = 1,i;
    if (broj == 1)
        return 1;
    for (i = 2; i*i < broj; i ++)
    {
        if (broj % i == 0)
            sum = sum + i + broj/i;
    }
    if (i * i == broj)
        sum = sum + i;
    return sum;                 //jako smanjen broj potrebnih iteracija u odnosu na prvu ideju, jako bitno je to kada imamo veliki broj iteracija
}
//----------------------------------------------------------------------------------------------------

int main()
{
    /*)
    float duljina,sirina;
    printf("Unesi duljinu i sirinu: ");
    scanf("%f%f", &duljina, &sirina);
    float Povrsina = povrsinaPravokutnika(duljina, sirina);
    printf("Povrsina pravokutnika je %.2f \n", Povrsina);

    //----------------------------------------------------------------------------------------------------
    int broj1;
    printf("Unesi dvoznamenkasi broj: ");
    scanf("%d", &broj1);
    maksDvoz(broj1);

    //----------------------------------------------------------------------------------------------------
    int number1;
    printf("Unesi broj do kojeg zelis faktorijel: ");
    scanf("%d", &number1);
    int faktorijel_gotov = faktorijel(number1);
    if (faktorijel_gotov == -1)
        printf("Unesen je negativan broj!");
    else
        printf("Faktorijel broja %d je %d\n", number1, faktorijel_gotov);

    //----------------------------------------------------------------------------------------------------
    int duljina;
    printf("unesi zeljenu duljinu: ");
    scanf("%d", &duljina);
    long niz = jedandopet(duljina);
    printf("Trazeni niz devetki ima oblik: %ld", niz);
    //----------------------------------------------------------------------------------------------------

     char znak;
     printf("Unesi neko slovo: ");
     scanf("%c", &znak);
     printf("Promjena velicine iz %c u %c. \n", znak, toLower(znak)); */
     //----------------------------------------------------------------------------------------------------
    int broj99;
    printf("unesi neki broj: ");
    scanf("%d", &broj99);
    printf("Suma djelitelja broja %d iznosi %d. \n", broj99, sumaDjelitelja(broj99));


    return 0;
}
