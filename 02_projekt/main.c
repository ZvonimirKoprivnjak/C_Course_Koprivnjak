#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    /*
    //n-ti clan aritmetièkog slijeda
    float a1,d,an;
    int n1;
    printf("Unesi pocetnu vrijednost: ");
    scanf("%f",&a1);
    printf("Unesi razliku izmedu clanova: ");
    scanf("%f",&d);
    printf("Unesi broj clanova: ");
    scanf("%d",&n1);
    an = a1+(n1-1)*d;
    printf("Clan a%d ima vrijednost %.2f \n",n1,an);    // ili an = a1 + (n-1)*d;
    //---------------------------------------------------------------------------------------------
    //suma èlanova niza
    float sn;
    sn = (a1+an)*n1/2;
    printf("Suma iznosi %.2f \n",sn);
    //---------------------------------------------------------------------------------------------
    //izracun vremena putovanja
    float brzina,udaljenost;
    int vrijeme_s;
    printf("Unesi udaljenost izmedu tocke A i B: ");
    scanf("%f",&udaljenost);
    printf("Unesi brzinu pri putovanju: ");
    scanf("%f",&brzina);
    vrijeme_s = (int)udaljenost/(int)brzina;
    float vrijeme_min = (udaljenost/brzina-vrijeme_s)*60;
    printf("Vrijeme za putovanje: %d sata, %.2f minuta \n",vrijeme_s,vrijeme_min);
    //---------------------------------------------------------------------------------------------
    //sekunde u sate minute i sekunde
    int sec;
    int s, min, ostatak_sec;
    printf("Unesi broj sekundi: ");
    scanf("%d", &sec);
    s = sec / 3600;
    min = (sec - s * 3600) / 60;
    ostatak_sec = (sec - s * 3600) %60;
    printf("%d sat, %d minuta, %d sekundi \n", s, min, ostatak_sec);
    */ //---------------------------------------------------------------------------------------------
    float broj = 3.32131f;
    float cijeli,decimalni;
    decimalni = modff(broj,&cijeli);   //modf za double tip podataka
    printf("%f, \n%f, \n%f \n",broj, cijeli, decimalni);
    //---------------------------------------------------------------------------------------------
    // reversiranje broja
    int broj_1 = 5032;
    int obrnutiBroj = 0;

    while (broj_1 != 0) {
        int znamenka = broj_1 % 10;         // Izdvaja zadnju znamenku
        obrnutiBroj = obrnutiBroj * 10 + znamenka;  // Dodaje znamenku u novi broj
        broj_1 = broj_1 / 10;                 // Smanjuje broj uklanjanjem zadnje znamenke
    }

    printf("Obrnuti broj: %d\n", obrnutiBroj);  // Ispisuje 2305
    //---------------------------------------------------------------------------------------------
    int broj_2;
    broj_2 = 99;
    float korijen = sqrt((float)broj_2/4);  //potrebno float jer unutar zagrade radimo raèun s rezultatom float
    //float korijen = sqrt(broj_2);           //klasièni korijen ne treba to
    printf("%f \n",korijen);
    //potenciranje
    int u = 3;
    float pote_3 = pow(u,2);
    printf("%.2f \n",pote_3);


    return 0;
}
