// Dynamically allocating a 2D array
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **arr, i, j, ROWS, COLS;
    printf("\n Enter the number of rows and coloumns in the array: ");
    scanf("%d %d",&ROWS, &COLS);

    arr = (int**)malloc(ROWS * sizeof(int*));
    if(arr == NULL)
    {
        printf("\n Memory could not be allocated");
        exit(-1);
    }
    for(i=0;i<ROWS;i++)
    {
        arr[i] = (int*)malloc(COLS * sizeof(int));
        if(arr == NULL)
    {
        printf("\n Memory could not be allocated");
        exit(-1);
    }

    }

    printf("\n Enter the values of the array: ");
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n The arrays are as follows: ");
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }

    for(i=0;i<ROWS;i++)
        free(arr[i]);
    free(arr);
}
