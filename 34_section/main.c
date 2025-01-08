#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void swap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swap_on(int *arr1, int *arr2)
{
    int i;
    for(i=0;i<SIZE;i++)
        swap(&arr1[i], &arr2[i]);
}

void printArr(int *arr)
{
    int i;
    for (i =0;i<SIZE;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main()
{

    int a = 5;
    int b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d ", a , b);

    int array1[SIZE] = {1,2,3,4,5};
    int array2[SIZE] = {6,7,8,9,10};
    printf("Prije zamjene\n");
    printArr(array1);
    printArr(array2);
    swap_on(array1, array2);
    printf("Nakon zamjene\n");
    printArr(array1);
    printArr(array2);
    return 0;
}
