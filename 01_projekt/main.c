#include <stdio.h>

int main()
{   /*
    //ISPIS PODATAKA
    printf("Hello World! \n");                                                  //ispis podataka u terminalu    "\n" novi red u zapisu
    printf("First name: Zvonimir \nLast name: Koprivnjak \nAge: 23 \nGender: Male \n \n");
    //isosceles triangle
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");                                                        // komentiranje vise linja koda /* *_/
    printf("Imam 23 godine. \n");
    int godine = 23;
    printf("Imam %d godine. \n", godine );
    //printf("Prosjek ocjena mi je %d \n", 4.6483);                             //ispis je -3123214 cudni broj
    printf("Prosjek ocjena mi je %f \n", 4.6483234223);                         //ispis je 4.648323
    printf("Prosjek ocjena mi je %.2f \n", 4.6483);                             //ispis je 4.65
    //------------------------------------------------------------------------------------------------------------------------------
    printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);                     //tu se moze odmah i racunati
    printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n" , 3, 5, 3, 5, 3+5);
    //------------------------------------------------------------------------------------------------------------------------------
    printf("num1 = %d, num2 = %d, sum = %d \n", 5,2,5+2);
    printf("num1 = %d, num2 = %d, sub = %d \n", 5,2,5-2);
    printf("num1 = %d, num2 = %d, sub = %d \n", 2,5,2-5);
    printf("num1 = %d, num2 = %d, mul = %d \n", 5,2,5*2);
    printf("num1 = %d, num2 = %d, div = %d \n", 5, 2, 5/2);                     //ispisuje samo cijeli dio

    printf("%d %% %d = %d \n", 5, 2, 17%5);                                     //ispisuje samo ostatakdjeljenja  %% - za ispis simbola posto
    //---------------------------------------------------------------------------
    //zadatak
    //**********
    //**********
    //**********
    //**********
    //**********
    printf("**********\n**********\n**********\n**********\n**********\n");
    //---------------------------------------------------------------------------
    printf("Godina rodenja %d.\n",2024-23);
    */

    //------------------------------------------------------------------------------------------------------------------------------
    //------------------------------------------------------------------------------------------------------------------------------
    //VARIJABLE
    /*
    int age;
    age = 30;                       //ILI int age = 30;
    //------------------------------------------------------------------------------------------------------------------------------
    double temp;                    //
    temp = 37.5;
    //------------------------------------------------------------------------------------------------------------------------------
    int num1 = 80;
    int num2 = 100;
    printf("Prosjek: %d. \n", (num1+num2)/2);
    //------------------------------------------------------------------------------------------------------------------------------
    int broj_1;                     //deklariranje varijabli
    int broj_2;
    printf("Unesi prvi broj: ");
    scanf("%d",&broj_1);            //pridjeljivanje sadržaja varijablama
    printf("Unesi drugi broj: ");
    scanf("%d", &broj_2);
    printf("Prosjek brojeva je: %d \n", (broj_1+broj_2)/2);    //ispis sadržaja
    //------------------------------------------------------------------------------------------------------------------------------
    double duljina;                             //deklarariranje varijabli preko double je preciznije i zauzima vise memorije
    double visina;
    double povrsina;
    printf("Racunamo povrsinu kvadrata \n");
    printf("Unesi visinu:");
    scanf("%lf",&visina);
    printf("Unesi duljinu:");
    scanf("%lf",&duljina);
    printf("Povrsina je %.8lf \n", visina*duljina);
    //------------------------------------------------------------------------------------------------------------------------------
    float duljina2;
    float visina2;
    float povrsina2;
    printf("Racunamo povrsinu kvadrata \n");
    printf("Unesi visinu:");
    scanf("%f",&visina2);
    printf("Unesi duljinu:");
    scanf("%f",&duljina2);
    povrsina2 = duljina2 * visina2;
    printf("Povrsina je %.8f \n", povrsina2);
    */  //------------------------------------------------------------------------------------------------------------------------------
    int num_1=5, num_2=2;
    double rezultat_1;
    rezultat_1 = num_1 / num_2;
    printf("Rezulat djeljenja %lf \n", rezultat_1);  //ispis æe biti 2.000000 nije uredu
    //potrebna je pretvorba podatka ili da jedan od varijabli posatane double ili casting
    rezultat_1 = num_1 / (double)num_2;
    printf("Rezulat djeljenja %lf \n", rezultat_1);    //ispis æe biti 2.50000
    printf("Rezulat djeljenja %.1lf \n", rezultat_1);  //ispis æe biti 2.5
    //------------------------------------------------------------------------------------------------------------------------------
    //zamjena sadrzaja u varijablama
    int a = 10;
    int b = 20;
    int temp;
    printf("a = %d, b = %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d \n", a, b);
    //------------------------------------------------------------------------------------------------------------------------------
    float z = 10.45;
    float l = 20.39;
    float temp1;
    printf("a = %f, b = %f \n", z, l);
    temp = z;
    z = l;
    l = temp1;
    printf("a = %f, b = %f \n",z, l);

    return 0;
}
