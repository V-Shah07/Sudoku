#include <stdio.h>


void printBoard(int arr[9][9])
{
    for(int i = 1; i <= 9; ++i)
    {
        for(int j = 1; j <= 9; ++j)
        {
            printf("%d ", arr[i-1][j-1]);
            if(j %3 == 0 && j != 9)
            {
                printf("| ");
            }
        }
        if(i %3 == 0 && i!= 9)
        {
            printf("\n");
            printf("- - -   - - -   - - -");
        }
        printf("\n");
    }
}