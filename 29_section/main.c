#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure

//PRIMJERI
struct datum
{
    int dan;
    int mjesec;
    int godina;
};
//-------------------------------------------------------
struct tocka
{
    float x;
    float y;
};

typedef struct Tocka
{
    int x;
    int y;
}TOCKA;

//-------------------------------------------------------
struct adresa
{
    char drzava[20];
    char grad[10];
    char uluca[20];
    int broj;
};
//-------------------------------------------------------
typedef struct datumm
{
    int dan;
    int mjesec;
    int godina;
} DATUM;
//-------------------------------------------------------
// STRUKTURA koja ima polje kao data members
typedef struct zaposlenici{
    char name[10];
    float age;
    int id;
} Zaposlenici;
//-------------------------------------------------------
// 02 Komponiranje strukture unutar druge strukture
//komponiramo strukturu TOCKA unutar strukture Krug jer je krug definiran s tockom i radijusom
// klasicno rjesenje
typedef struct krug
{
    int x;
    int y;
    double radijus;
} Krug;

typedef struct krugg
{
    TOCKA srediste;  // sadrzi dva elementa x i y
    double radijus;

} Krugg;

//-------------------------------------------------------
//FUNKCIJE
DATUM unosDatuma()
{
    DATUM dt;
    scanf("%d", &dt.dan);
    scanf("%d", &dt.mjesec);
    scanf("%d", &dt.godina);
    return dt;
}

void ispisDatuma(DATUM dt)
{
    printf("%d.%d.%d. \n", dt.dan, dt.mjesec, dt.godina);
}
//-------------------------------------------------------
// 01 Zadatak: napisi dvije funkcije:
//          -funkcija #1 - prvi vatijablu tocka i ispise informacije
//          -funkcija #2 - odgovorna za primanje informacija o tocki i vracanje tocke

TOCKA unosPodatakaTocke()
{
    TOCKA point;
    printf("Unesi x koordinatu: ");
    scanf("%d", &point.x);
    printf("Unesi y koordinatu: ");
    scanf("%d", &point.y);
    return point;
}

void ispisPodatakaTocke(TOCKA point)
{
    printf("X koordinata unesene tocke iznosi: %d \n", point.x);
    printf("Y koordinata unesene tocke iznosi: %d \n", point.y);
}
//-------------------------------------------------------------
int provjeraJednakotiTocki( TOCKA p1, TOCKA p2)
{
    if ( p1.x == p2.x && p1.y == p2.y)
        return 1;
    else
        return 0;
}

int provjeraNEJednakotiTocki( TOCKA p1, TOCKA p2)
{
    if ( p1.x != p2.x || p1.y != p2.y)
        return 1;
    else
        return 0;
}
//-------------------------------------------------------------


//-------------------------------------------------------
int main()
{
    /*
    struct tocka prva_tocka;
    prva_tocka.x = 10;
    prva_tocka.y = 10.5;
    printf("%.2f,%.2f \n", prva_tocka.x, prva_tocka.y);
    struct tocka druga_tocka;
    scanf("%f",&druga_tocka.x);
    scanf("%f", &druga_tocka.y);
    printf("%f,%f \n", druga_tocka.x,druga_tocka.y);
    //-------------------------------------------------------

    DATUM nova_godina;
    nova_godina.dan = 1;
    nova_godina.mjesec = 1;
    nova_godina.godina = 2025;
    ispisDatuma(nova_godina);
    ispisDatuma(unosDatuma()); //poziv funkcije koja vraæa ispis datuma koji se upisuje pomocu funkcije koja vraca tip podataka DATUM

    //--------------------------------------------------------------------------
    // Inicijalizacija varijabli

    //deklaracija varijable TOCKA (bez inicijalizacije)
    TOCKA p1;

    //Inicijalizacija varijable TOCKA (clanovi po redu kako su deklarirani u strukturi)
    TOCKA p2 = { 5, 7};

    //using designated initializer
    TOCKA p3 = { .x = 3, .y = 4};

    // usinf designated initializer (out of order)
    TOCKA p4 = { .y = 6, .x = 2};

    // designed initializer (svi ostali clanovi su nula)
    TOCKA p5 = { .x = 1 };

    //-------------------------------------------------------------
    // 01
    TOCKA p1 = unosPodatakaTocke();
    ispisPodatakaTocke(p1);
    p1.x += 1;
    p1.y += 3;
    printf("P1 nakon promjene: \n");
    ispisPodatakaTocke(p1);
    //-------------------------------------------------------------

    // creating a "Static Array of Points"
    TOCKA poljeTocaka[5]; //stvorili smo polje od 5 tocaka koje u sebi imaju tip varijable TOCKA koji sadrzi dva elementa y i y

    // citanje unosa i i spremanje unutar prvog elementa polja
    printf("Unesi x koordinatu prve tocke: ");
    scanf("%d", &poljeTocaka[0].x);
    printf("Unesi y koordinatu prve tocke: ");
    scanf("%d", &poljeTocaka[0].y);
    // za unos podataka u ostale tocke najbolje je korstiti for petlju  &poljeTocaka[i].x &poljeTocaka[i].y
    // također za ispis isto koristiti for petlju                       &poljeTocaka[i].x &poljeTocaka[i].y

    //-------------------------------------------------------------
    Zaposlenici Zaposlenik1;
    Zaposlenici Zaposlenik2 = { "Zvonimir", 23.5 , 1234};
    //kopiranje podataka jedne strukture u drugu strukturu
    Zaposlenik1 = Zaposlenik2; // moze se vidjeti da posto imamo polje nije bilo potrebno kopirati element po element vec se sve to samo obavi
        // jako je bitno da varijable budu istog tipa inace kopiranje nije mogucee
    printf(" Zaposlenik #1 ima ime %s \n", Zaposlenik1.name);
    printf(" Zaposlenik #2 ima ime %s \n", Zaposlenik2.name);

    strcpy(Zaposlenik1.name, "Luka");
    Zaposlenik1.id = 7461759;

    printf(" Zaposlenik #1 ima ime %s \n", Zaposlenik1.name);
    printf(" Zaposlenik #2 ima ime %s \n", Zaposlenik2.name);
    printf(" ID prvog zaposlenika je %d \n", Zaposlenik1.id);
    printf(" ID drugog zaposlenika je %d \n", Zaposlenik2.id);
    //-------------------------------------------------------------
    //koristenje logickih operacija (>,<, <=, >=, !=, ==)
    TOCKA p8 = { 4,5}, p9 = { 1,9};


    // ne zanmo koji podatak sluzi za usporedbu nije definirano i zato baca ERROR
//    if (p8 > p9){
//        printf("NE Radi");
//    }
//
//    if (p8 == p9){
//        printf("NE Radi");
//    }


    // rjesenje
    TOCKA p10 = {3,5}, p11 = {3,4};
    if (provjeraJednakotiTocki(p10, p11) != 0)
        printf("Jednake su");
    if (provjeraNEJednakotiTocki(p10, p11) != 0)
        printf("Nisu jednake");*/
    //-------------------------------------------------------------

    TOCKA p12 = {1,2};
    Krugg c1;
    c1.radijus = 3.3;
    c1.srediste = p12;

    // pristupanje elementima centra
    int x_kord = c1.srediste.x;



    return 0;
}
