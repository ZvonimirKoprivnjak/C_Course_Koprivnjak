#include <stdio.h>
#include <stdlib.h>

//  REKURZIJA!!!!!!!

//-----------------------------------------------------------------------------------------------------------
//suma brojeva
// 1+2+3+...+(num-1)+num
// num+(num-1)+...+3+2+1
int sum_up_to(int num)
{
    if (num == 1)   //ovo je uvjet koji ce zaustaviti rekurziju  to mora biti trivijalno rijesenje
        return 1;  // u slucaju kad se trazi suma brojeva do 1 to je jedan i to je poprilicno trivijalno rjesenje
    return num + sum_up_to(num-1);  // ako bi pustili samo ovu liniju koda nebi bilo dobro jer nemamo uvjet koji zasutavlja rekurziju izvršavalo bi se beskonacno
}
// num = 3 --> 3+sum_up_to(2)   = 3+3
// num = 2 --> 2+sum_up_to(1)   = 2+1  // prvo se problem rastavio na problema prema dole i onda kreæemo s rezulatatima prema gore
// num = 1 --> 1
//-----------------------------------------------------------------------------------------------------------
//faktorijel
int faktorijel_up_to(int num)
{
    if (num == 1)
        return 1;
    return num * faktorijel_up_to(num-1);
}
//----------------------------------------------------------------------------------------------------------
//Fibonaccijev niz
//ako je n 4
// rezultat je sljedeæi 0 1 1 2 3

int fibonacci( int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n-2)+fibonacci(n-1);
}
// n =4 --> fibonacci(2) + fibonacci(3) --> 1+2 = 3
// n =3 --> fibonacci(1) + fibonacci(2) --> 1+1 = 2
// n =2 --> fibonacci(0) + fibonacci(1) --> 0+1 = 1
// n =1 --> fibonacci(1)                --> 1
// n =1 --> fibonacci(0)                --> 0
//----------------------------------------------------------------------------------------------------------
//suma znamenaka broja
int sum_znamenki(int n)
{
    if (n==0)
        return 0;
    return n%10 +sum_znamenki(n/10);
}
//----------------------------------------------------------------------------------------------------------
//broj znamenaki u broju
int broj_znamenki(int n)
{
    if (n <= 9)
        return 1;
    return 1 + broj_znamenki(n/10);
}
//----------------------------------------------------------------------------------------------------------
// korisnik unosi neki broj
//korisnik unosi niz brojeva sve dok ne unese -1
//funkcija vraæa koliko ima brojeva manjih od unesenog prvog broja
int brojiManjeOdBroj1(int broj1) {
    int unos;
    printf("Unesi broj (-1 za kraj): ");
    scanf("%d", &unos);
    // Baza rekurzije: prekida unos kada je broj -1
    if (unos == -1) {
        return 0;
    }
    // Provjeri je li trenutni unos manji od broj1 i rekurzivno pozovi funkciju
    return (unos < broj1) + brojiManjeOdBroj1(broj1);
}

int main()
{
    int num;
    int rezultat_sum, rezultat_fakt, rezultat_fibo;
    printf("Unesi broj: ");
    scanf("%d:", &num);
    rezultat_sum = sum_up_to(num);
    printf("Rezultat suma znamenki do tog broja: %d \n", rezultat_sum);
    rezultat_fakt = faktorijel_up_to(num);
    printf("Rezultat faktorijela do tog broja: %d \n", rezultat_fakt);
    rezultat_fibo = fibonacci(num);
    printf("Zadnji clan fibonacci-jevog niza je: %d \n", rezultat_fibo);
    //----------------------------------------------------------------------------------------------------------
    int sumaZnamenki, brojZnamenki;
    int num1;
    printf("Unesi broj: ");
    scanf("%d", &num1);
    sumaZnamenki = sum_znamenki(num1);
    printf("suma zanmenki broja %d je %d \n", num1, sumaZnamenki);
    brojZnamenki = broj_znamenki(num1);
    printf("Ovaj broj ima %d znamenke \n", brojZnamenki);
    //----------------------------------------------------------------------------------------------------------
    int broj1;
    printf("Unesi prvi broj (broj1): ");
    scanf("%d", &broj1);

    int rezultat = brojiManjeOdBroj1(broj1);

    printf("Ukupan broj brojeva manjih od %d je: %d\n", broj1, rezultat);
    return 0;
}
