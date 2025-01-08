#include <stdio.h>
#include <stdlib.h>

//1_rekurzivna funkcija koja broji jednake znakove izmeðu unesenih
int znakovi(char znak)
{
    char unos;
    printf("Unesi znak(prekid je $): ");
    scanf(" %c", &unos);

    if (unos == '$')
        return 0;  // ovime prekidamo rekurzivne pozive
    //rekurzivni pozivi
    if (unos == znak)
        return 1 + znakovi(znak);
    return znakovi(znak);
}
//--------------------------------------------------------------------------------
//2_rekurzivna funkcija koja broji parne brojeve
int brojParnih()
{
    int broj;
    printf("Unesi zeljeni broj za provjeru(prekid je s -1): ");
    scanf("%d", &broj);
    if (broj == -1)
        return 0;
    if (broj%2 == 0)
        return 1 + brojParnih();
    return brojParnih();
}
//--------------------------------------------------------------------------------
//3_rekurzivna funkcija koja racuna sumu parnih brojeva
int sumaParnihBrojeva()
{
    int broj;
    printf("Unesi zeljeni broj za provjeru(prekid je s -1): ");
    scanf("%d", &broj);
    if (broj == -1)
        return 0;
    if (broj%2 == 0)
        return broj + sumaParnihBrojeva();
    return sumaParnihBrojeva();
}
//--------------------------------------------------------------------------------
//4_rekurzivna funkcija koja ispisuje brojeve od n to 1
void ispisBrojevaNtoOne(int n)
{
    if (n>= 1)
    {
        printf("%d ",n);
        ispisBrojevaNtoOne(n-1);
    }
}
//4_rekurzivna funkcija koja ispisuje brojeve od 1 do n
void ispisBrojevaOnetoN(int n)
{
    if (n>= 1)
    {
        printf("1");  //ove se odvija za vrijeme kretanja od n do 1
        ispisBrojevaOnetoN(n-1);
        printf("%d ",n); //a ispis se dogada u povratku rekurzivnih poziva
    }
    // krajnji ispis za n=5  11111 1 2 3 4 5
}
//--------------------------------------------------------------------------------
// 5_ rekuzivni ispis od n do 1 pa nazad do n
void finalNtoOneAndtoN(int n)
{
    if (n==1)
            printf("%d ",n);
    if (n >1)
    {
        printf("%d ",n);  //ove se odvija za vrijeme kretanja od n do 1
        finalNtoOneAndtoN(n-1);
        printf("%d ",n); //a ispis se dogada u povratku rekurzivnih poziva
    }
}
//--------------------------------------------------------------------------------
// 6_LUCAS_numbers
//sequence is set of numbers that have some rule 1,2,3... ; 2,4,6,... 2,4,8,16,..
// slicno kao fibonacci ali je za n=0 vrijednost jednaka 2 a za n=1 je vrijednost 1

int Lucas(int n)
{
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;
    return Lucas(n-2)+Lucas(n-1);
}

int Lucas_bez_rekurzije(int n)
{
    int rez;
    if (n==0)
        return 2;
    else if (n==1)
        return 1;
    else
    {
        int broj_2 = 2;
        int broj_1 = 1;
        for (int i = 2; i<=n; i++)
        {
            rez = broj_2 + broj_1;
            broj_2 = broj_1;
            broj_1 = rez;
        }
    }
    return rez;
}
//--------------------------------------------------------------------------------
// 7_rekurzivna funkcija koja nam daje maksimalni broj iz odredene sekvence brojeva
int maksBroj(int num)
{
    int maxSoFar;
    int unosUser;
    printf("Unesi broj: ");
    scanf("%d", &unosUser);
    if (num > 1)
    {
        maxSoFar = maksBroj(num-1);  // prvo ih unosimo i zatim provjeravamo koji broj je najveci
        if (unosUser > maxSoFar)
            return unosUser;
        else
            return maxSoFar;
    }
    return unosUser;  // ovo je potrebno kad dodemo do 1
}
//--------------------------------------------------------------------------------
// 8_rekurzivna funkcija koja nam daje minimalni broj iz odredene sekvence brojeva
int minBroj(int num)
{
    int minSoFar;
    int unosUser;
    printf("Unesi broj: ");
    scanf("%d", &unosUser);
    if (num > 1)
    {
        minSoFar = minBroj(num-1);
        if (unosUser < minSoFar)
            return unosUser;
        else
            return minSoFar;
    }
    return unosUser;
}
//--------------------------------------------------------------------------------
// 9_Pell number slicno kao lucas u fibronacci za n=0 0 za n=1 1 ali forumla je 2*(n-1)+(n-2)
int PellNumber(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return 2*PellNumber(n-1)+PellNumber(n-2);
}
//--------------------------------------------------------------------------------
// 10 vraca 1 ako je suma znamenki  nekog broja parni broj a ako je ne paran vraca 0  123 ->1 122->0
int sumZnamenkiParaniliNe(int n)
{
    int resultSoFar;
    if (n <=  9)
        if (n%2 == 0)
            return 1;
        else
            return 0;

    resultSoFar = sumZnamenkiParaniliNe(n/10);
    if (n % 10 % 2 == 0)
        if (resultSoFar == 1)
            return 1;
        else
            return 0;
    else
        if (resultSoFar == 1)
            return 0;
        else
            return 1;
}

int sumZnamenkiParaniliNe_OPTIMIZE(int n)
{
    if (n <=  9)
        return n%2 == 0 ? 1 : 0; //Ternary operators  return n%2 ? 0:1;
    if (n % 10 % 2 == 0)  // ovaj if se moze zapisati
                        //return n%10%2 ? !sumZnamenkiParaniliNe_OPTIMIZE(n/10):sumZnamenkiParaniliNe_OPTIMIZE(n/10);
        return sumZnamenkiParaniliNe_OPTIMIZE(n/10);
    else
        return !sumZnamenkiParaniliNe_OPTIMIZE(n/10);
}
//--------------------------------------------------------------------------------
// 11 rekurzivna funkcija koja dobije neki prirodan broj "n" npr 36435 svaka znamenka ima sboj index od 0 prema dalje
//cilj je pronaæi na neparnim pozicijama neparne brojeve a na parnim pozicijama parne brojeve i onda vrati 1
// inace vrati 0
int kontrolaZnamenkiPozicija(int n)
{
    if (n < 10)             //1 Digit Number --> Even Postion
        if (n % 2 == 0)     //The value is Even
            return 1;
        else
            return 0;
    if (n < 100)            // 2 digits Number -->The right most digit(even pos.) and left digit(odd pos.)
        if (n % 10 % 2 == 0 && n / 10 % 2 == 1)
            return 1;
        else
            return 0;
    if ((n % 10 % 2 ==0) && ( n / 10 % 10 %2 == 1))
        return kontrolaZnamenkiPozicija(n/100);
    else
        return 0;
}


int main()
{
    //  1
    char znak;
    int broj_jednakih;
    printf("Unesi znak za usporedbu: ");
    scanf("%c", &znak);
    broj_jednakih = znakovi(znak);
    printf("U navedenom nizu ima %d jednakih znakova znaku %c \n", broj_jednakih, znak);
    /*
    //--------------------------------------------------------------------------------
    //  2
    int broj_parnih;
    broj_parnih = brojParnih();
    printf("U navedenom nizu brojeva ima %d parna broja \n", broj_parnih);
    //--------------------------------------------------------------------------------
    //  3
    int suma_parnih_brojeva;
    suma_parnih_brojeva = sumaParnihBrojeva();
    printf("Suma parnih brojeva u navedenom nizu je %d \n",suma_parnih_brojeva);
    //--------------------------------------------------------------------------------
    //  4
    int z;
    printf("Unesi broj do kojeg zelis ispis: ");
    scanf("%d", &z);
    ispisBrojevaNtoOne(z);
    printf("\n");
    ispisBrojevaOnetoN(z);
    //--------------------------------------------------------------------------------
    // 5
    int k;
    printf("Unesi broj do kojeg zelis ispis: ");
    scanf("%d", &k);
    finalNtoOneAndtoN(k);
    //--------------------------------------------------------------------------------
    // 6
    int u;
    printf("Unesi broj do kojeg zelis ispis: ");
    scanf("%d", &u);
    printf("Lucas value at Index %d = %d \n", u, Lucas(u));

    printf("Lucas value at Index without recursion %d = %d \n", u, Lucas(u));
    //--------------------------------------------------------------------------------
    // 7
    int l;
    printf("Unesi koilko brojeva zelis unjeti: ");
    scanf("%d", &l);
    printf("Maksimalna vrijednost od unesenih brojeva je: %d \n", maksBroj(l));
    //--------------------------------------------------------------------------------
    // 8
    int q;
    printf("Unesi koilko brojeva zelis unjeti: ");
    scanf("%d", &q);
    printf("Minimalna vrijednost od unesenih brojeva je: %d \n", minBroj(q));
    //--------------------------------------------------------------------------------
    // 9
    int x;
    printf("Unesi broj do kojeg zelis ispis: ");
    scanf("%d", &x);
    printf("Pell value at Index %d = %d \n", x, PellNumber(x));
    //--------------------------------------------------------------------------------
    // 10
    int g;
    printf("Unesi broj za kojeg zelis provjeriti sumu znamenki: ");
    scanf("%d", &g);
    printf("Suma znamenki broja %d je(1) nije(0) paran broj: %d \n", g, sumZnamenkiParaniliNe(g));
    //--------------------------------------------------------------------------------
    // 11
    int y;
    printf("Unesi broj za kojeg zelis provjeriti pozicije i je li paran ili neparan: ");
    scanf("%d", &y);
    printf("Broja %d je(1) nije(0) pravilno sreden: %d \n", y, sumZnamenkiParaniliNe(y));
    */
    return 0;
}
