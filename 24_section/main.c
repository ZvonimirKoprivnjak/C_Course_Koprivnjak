#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int duljinaStringa(char *str)  // moglo i ovako char str[] //char *str -> Ovo je pokazivač na prvi element niza znakova
{
    int i;
    while(str[i] != '\0')
        i++;
    return i;
}

int strlen_moj(char *str)
{
    int i;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}


char *strcpy_moj(char *destinacija, char *izvor)//vracamo adresu prvog elemenata
{
    char *tempPtr;
    int i = 0;
    tempPtr = destinacija; //temPtr pokazuje na destinacija unutar koje se nalazi adresa prvog elementa
    while (izvor[i] != '\0')  //dok ne dodemo do kraja izvora
    {
        destinacija[i] = izvor[i];  //KOPIRAMO ELEMENT PO ELEMENT
        i++;
    }
    destinacija[i] = '\0'; //dodali smo na kraj \0
    return tempPtr;  //vracamo adresu koju sadrzi  temPtr
}

int strcmp_moj (char *str1, char *str2)
    {
        int i= 0 , flag=0;
        while (flag == 0) //tako dugo dok ne pronademo razliku u slovima
        {
            if (str1[i] < str2[i])
                flag = -1;
            else if (str1[i] > str2[i])
                flag = 1;
            if (str1[i] == '\0')  // ab abb
                break;
            i++;
        }
        return flag;
    }

int main()
{   /*
    char fullName[] = "Zvonimir Koprivnjak";
    int i=0;
    while (fullName[i] != '\0')  //ide tak dugo dok ne dode do null simbola
    {
        printf("%c ",fullName[i]);
        i++;
    }
    printf("\n");

    char firstnamee[10];
    scanf("%s", firstnamee);    //babarogamajmun
    printf("%s",firstnamee);  //babarogamajmun

    char firstname[10];
    scanf("%9s", firstname);    //babarogamajmun  ogranicili smo da uzme samo 9 znakova
    printf("%s",firstname);  //babarogam

    char str[20];
    scanf("%s",str);        //Hello world!
    printf("%s",str);       //Hello             //scanf ne uzima razmak u obzir

    char strr[20];
    gets(strr);             //Hello world!
    printf("%s \n",strr);      //Hello world!      // gets uzima razmak u obzir
    //PREPORUKA NAJBOLJE KORISTITI fgets()
    puts(strr);             //Hello world!      odmah doda i novi red

    //---------------------------------------------------------------------------------
    // pisanje funkcije za dobivanje duljine stringa
    char string1[20];
    int duljina;
    scanf("%s",string1);
    duljina = duljinaStringa(string1);
    printf("String ima duljinu od %d znakova. \n", duljina);

    //---------------------------------------------------------------------------------
    //KORIŠTENJE GOTOVIH FUNKCIJA IZ LIBRARY-JA <stirng.h>  << #includa <string.h>
    // strlen
    // strcpy
    // strcat
    // strcmp


    //----------------------------------------------------------------------------------
    // prikaz koje su vrijednosti ASCII znakova i razmaka u rijeci Hello World
    char str[] = "Hello World";

    printf("String: %s\n", str);
    printf("ASCII vrijednosti:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Znak '%c' -> ASCII: %d\n", str[i], str[i]);
    }

    //-------------------------------------------------------------------------------------
    //CHAT GPT rjesenje za broj rijeci u recenici
    char recenica[100];
    int brojRijeci = 0, i;
    int uRijeci = 0;

    printf("Unesi rijec/recenicu: ");
    fgets(recenica, sizeof(recenica), stdin);

    // Uklanjanje znaka '\n' na kraju rečenice, ako postoji Koristi strcspn za uklanjanje novog reda koji fgets automatski dodaje.
    recenica[strcspn(recenica, "\n")] = '\0';

    for (i = 0; recenica[i] != '\0'; i++) {
        if (!isspace(recenica[i])) {    //provjeravamo ako imamo razmak
                //DODATNO OBJAŠNJENJEN: Koristi !isspace(recenica[i])kada želiš uzeti u obzir sve vrste razmaka (npr. kod unosa teksta iz datoteka,
                                        //terminala ili korisničkog unosa), Koristi recenica[i] != ' ' kada te zanima samo običan razmak
            if (!uRijeci) {             // provjeravamo ako smo unutar riječi
                brojRijeci++;
                uRijeci = 1; // Sada smo unutar rijeci
            }
        } else {
            uRijeci = 0; // Izvan riječi
        }
    }

    printf("Ukupan broj rijeci u recenici je %d.\n", brojRijeci);

    printf("%s", recenica);
    */
    //------------------------------------------------------------------------------------------------
    //implementacija funkcije srtlen

    //implementacija funkcije strcpy

    char mojNadimak[] = "Zvona";
    char kopija_Nadimka[30];
    char *temp;
    temp = strcpy_moj(kopija_Nadimka, mojNadimak);
    printf("Kopija stringa je: %s \n", temp);  // dode isto ko i kopija_Nadimka jer imaju istu adresu u sebi
    printf("Kopija stringa je: %s \n", kopija_Nadimka);
    printf("Adresa stringa je: %p \n", &temp[0]);  // isti ispis daje i , temp
    printf("Adresa stringa je: %p \n", &kopija_Nadimka[0]);
    printf("Pocetni string je: %s \n", mojNadimak);

    char *ptr;
    ptr = mojNadimak;
    printf("%s \n", ptr); //Iako ti ovdje ne pišeš petlju, printf je interno iterira kroz niz.  //ISPIS: Zvona
    printf("%c \n", *ptr); // ISPIS: Z

    // implementacija strcmp

    char str1[] = "Jabuke";
    char str2[] = "Jabuke";

    int flag = strcmp_moj(str1,str2);
    printf("%d", flag);




    return 0;
}
