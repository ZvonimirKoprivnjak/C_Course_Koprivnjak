#include <stdio.h>
#include <stdlib.h>
//FUNKCIJE
//pod vracanje se ne misli na ispis teksta u terminalo(printf)

//NEMA parametara & NE vraca nista
//GREETING Function
void ispisPohvale()  //dema definiranih funkcija
{
    //tijelo funkcije
    printf("Bok\n");
    printf("Danas je suncan dan. \n");
    printf("Sretno!\n");
}
//----------------------------------------------------------------------------------------------------
//IMA parametara & NE vraca nista
//minimum maksimum dva broja
void printMinMax(int num1, int num2)
{
    if (num1>num2)
    {
        printf("Maksimum: %d\n", num1);
        printf("Minimum: %d\n", num2);   //ne vracamo nista samo ispisujemo
    }
    else
    {
        printf("Maksimum: %d\n", num2);
        printf("Minimum: %d\n", num1);

    }
}
//----------------------------------------------------------------------------------------------------
//NEMA parametara & VRACA nesto
int maxBetween3()
{
    int num1, num2, num3;
    printf("Unesi broj1, broj2, broj3: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1>num2)
        if(num1>num3)
            return num1;
        else
            return num3;
    else if (num2>num3)
        return num2;
    else
        return num3;
}

//----------------------------------------------------------------------------------------------------
//IMA parametara & VRACA nesto
float prosjekOcjena(int grad1, int grad2, int grad3)
{
    return (grad1+grad2+grad3)/3.0;
}



int main()
{
    //NEMA parametara & NE vraca nista
    //GREETING Function
    printf("Kako ide frende? \n");
    ispisPohvale(); //poziv funkcije
    printf("Imala je lijepu rupicu na bradi\n");

    //----------------------------------------------------------------------------------------------------
    //IMA parametara & NE vraca nista
    int a, b;
    printf("Unesi prvi broj: ");
    scanf("%d", &a);
    printf("Unesi drugi broj: ");
    scanf("%d", &b);
    printMinMax(a,b);

    //----------------------------------------------------------------------------------------------------
    //NEMA parametara & VRACA nesto
    int maksimum = maxBetween3();  //u ovom slucaju moramo imati neku varijablu u koju spremamo povratnu vrijednost
    printf("%d \n", maksimum);

    //----------------------------------------------------------------------------------------------------
    //IMA parametara & VRACA nesto
    int grade1, grade2, grade3;
    printf("Unesi tri ocjene: ");
    scanf("%d%d%d", &grade1 ,&grade2, &grade3);
    printf("Prosjek: %.2f\n", prosjekOcjena(grade1, grade2, grade3));
    //----------------------------------------------------------------------------------------------------

    return 0;
}
