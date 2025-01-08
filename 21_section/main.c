#include <stdio.h>
#include <stdlib.h>
//Matrix (2D arrays)
//DEKLARACIJA: tip_podatka_u_matrici naziv_matrice[broj_redaka, broj_stupaca]
//PRIMJER: int matrica[3][4] matrica ima 3 redka i 4 stupca indeksiranje isto ko kod polja krece od 0

//INICIJALIZACIJA:      int matrica[2][3]={{1,2,3},{4,5,6}}
//                      int mat[2][3]={1,2,3,4,5} dobit cemo matricu oblika 1,2,3;4,5,0
//PRISTUPANJE               matrica[0][0] == 1;

#define SIZE 2

int main()
{
    /*
    int my2Darray[2][3] = {{1,5,9},{2,6,10}};
    int i,j;
    for (i=0; i<2; i++)
    {
        for (j=0 ; j<3; j++) //ugnjezdjenja petlja
        {
            printf("%d ",    my2Darray[i][j]);
        }
        printf("\n");
    }

    //------------------------------------------------------------------------------
    int i,j;
    int mat[SIZE][SIZE];

    //mnozenje elemenata
    for (i = 1; i<=SIZE; i++)
        for (j = 1; j<=SIZE; j++)
            mat[i][j] = i*j;

    //ispis elemenata
    for (i = 1; i<=SIZE; i++)
    {
        for (j = 1; j<=SIZE; j++)
            printf("%5d ", mat[i][j]);
        printf("\n");
    }

    //---------------------------------------------------------------------------------
    int i,j;
    int mat[SIZE][SIZE];

    //mnozenje elemenata
    for (i = 1; i<=SIZE; i++)
        for (j = 1; j<=SIZE; j++)
        {
            printf("Unesi element u %d. redu i %d. stupcu: ",i,j);
            scanf("%d", &mat[i][j]);
        }


    //ispis elemenata
    for (i = 1; i<=SIZE; i++)
    {
        for (j = 1; j<=SIZE; j++)
            printf("%5d ", mat[i][j]);
        printf("\n");
    }
    */
    //------------------------------------------------------------------------------
    // ispis adresa elemenata polja
    int arr[5]= {1,2,3,4,5};
    printf("element 1 ima adresu %lu\n", &arr[0]);  //6422016
    printf("element 1 ima adresu %p\n", &arr[0]);  //000000000061FE00
    printf("element 2 ima adresu %lu\n", &arr[1]);  //6422020
    //------------------------------------------------------------------------------
    //ispis elemenata matrice
    int mat[2][3] = {{1,3,5},{2,4,6}};
    int i,j;
    for (i = 0; i<=2; i++)
        for (j = 0; j<=3; j++)
        {
            printf("Element u %d. redu i %d. stupcu ima adresu: %lu \n",i,j,&mat[i][j]);   //adrese su kao da su elementi jedan za drugim
        }

    return 0;
}
