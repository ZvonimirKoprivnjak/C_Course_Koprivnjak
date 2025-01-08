#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    /*
    //if uvjet
    int ocjena;
    printf("Unesi postotak rjes enosti ispita: ");
    scanf("%d", &ocjena);
    if (ocjena>50 && ocjena<90)
    {
        printf("cestitam");
    }
    else if (ocjena>=100)
    {
        printf("jeebno");
    }
    else
    {
        printf("lose");
    }

    //------------------------------------------------------------------------------------------------------------------
    int num1 = 100;
    int num2 = 100;
    if (num1 < num2)
    {
        printf("\n dobro");
    }
    else
    {
        printf("\n ocekivano");
    }
    //------------------------------------------------------------------------------------------------------------------

    bool stanje = false;

    if (stanje == false)
    {
        printf("tocno");
    }
    else
    {
        printf("neistinito");
    }

    //------------------------------------------------------------------------------------------------------------------
    char ocjena;
    printf("Unesi ocjenu od A do C: ");
    scanf("%c",&ocjena);
    switch(ocjena)  //varijabla koju provjeravamo
    {
        case 'A':
            printf("ocjena je odlican \n");
            break;
        case 'B':
            printf("ocjena je vrlo dobar \n");
            break;
        default:  //što ce se izvrsiti ako ni jedan slucaj nije ispunjen
            printf("ocjena je dobar \n");
            break;
    }
    //------------------------------------------------------------------------------------------------------------------
    char operacija;
    int num1,num2;
    printf("Unesi zeljena prvi broj:");
    scanf("%d",&num1);
    printf("Unesi zeljena drugi broj:");
    scanf("%d",&num2);
    printf("Unesi zeljenu operaciju(+,-,/,*): ");
    scanf(" %c",&operacija);

    switch(operacija)  //varijabla koju provjeravamo
    {
        case '+':
            printf("Zbroj je: %d", num1+num2);
            break;
        case '-':
            printf("Razlika je: %d", num1-num2);
            break;
        case '*':
            printf("Umnozak je: %d", num1*num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Ne dijeliti s 0");
            }
            else
            {
                printf("Razlomak je: %d", (double)num1/num2);
            }

            break;
        default:  //što ce se izvrsiti ako ni jedan slucaj nije ispunjen
            printf("Pogresno odabrana operacija");
            break;
    }

    //------------------------------------------------------------------------------------------------------------------
    //Ternary operators
    int num9 = 10;
    int num10 = 9;
    int min = (num9>num10)? num10:num9;
    printf("%d",min);

    //------------------------------------------------------------------------------------------------------------------
    //01
    int num01,num02;
    printf("Unesi prvi cijeli broj: ");
    scanf("%d",&num01);
    printf("Unesi drugi cijeli broj: ");
    scanf("%d",&num02);
    (num01==num02) ? printf("Brojevi su jednaki \n"):printf("Brojevi nisu jednaki \n");
    //02
    int num03,num04, num05;
    printf("Unesi prvi cijeli broj: ");
    scanf("%d",&num03);
    printf("Unesi drugi cijeli broj: ");
    scanf("%d",&num04);
    printf("Unesi treci cijeli broj: ");
    scanf("%d",&num05);

    if (num03==num04 && num03==num05)
    {
        printf("Brojevi su jednaki. \n");
    }
    else
    {
        printf("Brojevi nisu jednaki. \n");
    }
    //03
    int num06, prvo_mj, drugo_mj, trece_mj, broj;
    printf("Unesi troznamenkasti cijeli broj: ");
    scanf("%d",&num06);
    broj = num06;
    prvo_mj = num06%10;
    num06 = num06/10;
    drugo_mj = num06%10;
    num06 = num06/10;
    trece_mj = num06%10;

    if (trece_mj<drugo_mj && drugo_mj<prvo_mj)
    {
        printf("Broj %d ima ASCENDING poredak.\n", broj);
    }
    else
        {
        printf("Broj %d nema ASCENDING poredak.\n", broj);
    }
    //04
    int num07;
    printf("Unesi realan broj: ");
    scanf("%d",&num07);
    if (num07>0)
        printf("Positive number. \n");
    else if (num07==0)
        printf("Number is equal to zero. \n");
    else
        printf("Negative number. \n");
    return 0;

    //------------------------------------------------------------------------------------------------------------------
    int num08,i,broj;
    printf("Unesi realan broj: ");
    scanf("%d",&num08);
    broj = num08;
    while (num08!=0)
    {
        num08 = num08 / 10;
        i = i + 1;
    }
    if (i==2)
        printf("Broj %d je dvoznamenkasti. \n",broj);
    else if (i==3)
        printf("Broj %d je troznamenkasti. \n",broj);
    else
        printf("Broj %d nije ni dvoznamenkasti ni troznamenkasti. \n",broj);
    // moguce rijesiti i s intervalima 10..99 i 100...999

    //------------------------------------------------------------------------------------------------------------------

    int vrijeme, sekunde, minute, sati;
    printf("Unesi broj sekundi: ");
    scanf("%d", &vrijeme);
    sati = vrijeme/3600;
    minute = (vrijeme%3600)/60;
    sekunde = (vrijeme%3600)%60;
    if (sati>9)
    {
        if (minute>9)
        {
            if (sekunde>9)
                printf("%d:%d:%d\n", sati, minute, sekunde);
            else
                printf("%d:%d:0%d\n", sati, minute, sekunde);
        }
        else
            if (sekunde>9)
                printf("%d:0%d:%d\n", sati, minute, sekunde);
            else
                printf("%d:0%d:0%d\n", sati, minute, sekunde);
    }
    else
    {
        if (minute>9)
        {
            if (sekunde>9)
                printf("0%d:%d:%d\n", sati, minute, sekunde);
            else
                printf("0%d:%d:0%d\n", sati, minute, sekunde);
        }
        else
            if (sekunde>9)
                printf("0%d:0%d:%d\n", sati, minute, sekunde);
            else
                printf("0%d:0%d:0%d\n", sati, minute, sekunde);
    }
    //puno brze

    if (sati<10)
        printf("0");
    printf("%d:", sati);
    if (minute<10)
        printf("0");
    printf("%d:", minute);
    if (sekunde<10)
        printf("0");
    printf("%d \n", sekunde);
    */
    //------------------------------------------------------------------------------------------------------------------
    int a, b, c;
    printf("Unesi tri broja: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a==0 || b==0 || c==0)
        printf("Neki od brojeva je nula");
    else
    {
        if ((a%b==0 || b%a==0) && (c%b==0 || b%c==0) && (a%c==0 || c%a==0))
            printf("BROJEVI SU DJELJIVI MEDUSOBNO!");
        else
            printf("BROJEVI NISU DJELJIVI MEDUSOBNO!");
    }



}
