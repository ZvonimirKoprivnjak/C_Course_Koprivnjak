#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Unions!

//tamplate for Union
// union <union_name>{
//      datatype1 field1;
//      datatype2 fiels2;
//      ...
//};
//------------------------------------------------
//  01
union info
{
    char firstName[20];
    int age;
};

union minmax
{
    int min;
    int max;
    double average;
};
//------------------------------------------------
//  02

struct point_struct
{
    int x;
    int y;
};

union point_union
{
    int x;
    int y;
};
//------------------------------------------------
//  03
union Student{
    int ID;
    double prosjek_ocjena;
};

typedef union Studentt{
        int ID;
        double prosjek;
}STUDENTT;

int main()
{
    // Templete for creating a Union Variable
    //union <union_name> <variable_name>;
    union info myVariable;
    //------------------------------------------------
    //  01
    myVariable.age = 30;
    printf("myVariable1.age = %d \n", myVariable.age);

    strcpy(myVariable.firstName, "Hello");
    // Sada postavljamo vrednost èlana `first name`, što "pregazi" prethodni èlan
    printf("myVariable.firstName = %s \n", myVariable.firstName);
    printf("myVariable1.age = %d \n", myVariable.age);  // ne ispiše 30 jer u memoriji taj clan je pregazen ne postoji vise ta vrijednost
    //.......................................................
    //  02
    struct point_struct point1;
    union point_union point2;

    point1.x = 1;
    point1.y = 2;

    printf("Struct Point = (%d,%d)\n", point1.x, point1.y );    //ispis 1,2
    point1.y = 10;

    printf("After Change --> Struct Point = (%d,%d)\n", point1.x, point1.y );    //ispis 1,10 jer svaki elemnt strukture ima svoj dio memorije

    point2.x = 3;
    printf("Union Point = (%d, %d) \n", point2.x, point2.y);    //ispis 3,3  jer na ispom mjestu u memoriji nalaze i istog su tipa

    point2.y = 4;
    printf("After Change --> Union Point = (%d, %d) \n", point2.x, point2.y);
    //------------------------------------------------
    //  03
    union Student student1;
    union Student *ptrStudent2;

    student1.ID = 5;
    printf("Student1.ID = %d\n", student1.ID);

    ptrStudent2 = &student1; // ptrStudent2 points to student1

    ptrStudent2->ID = 10;

    printf("Student1.ID = %d\n", student1.ID);

    printf("Size of student1 union = %d \n", sizeof(student1));  // ispis 8 zbog double koji je 8 bajta 64 bita
    printf("Size of ptrStudent2 = %d \n", sizeof(ptrStudent2));  // ispis 8 ali slucajno jer on sadrzi samo adresuu unije

    int i;
    STUDENTT studentArray[3];
    for (i=0;i<3;i++)
    {
        printf("Unesi ID #%d: ", i+1);
        scanf("%d", &studentArray[i].ID);
    }
    return 0;
}
