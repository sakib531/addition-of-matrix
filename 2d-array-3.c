#include<stdio.h>

int main()
{
    int row , column , k , r ;

    printf("Enter row length of Matrix A please : ");
    scanf("%d" , &row);

    printf("\nEnter column length of Matrix A please : ");
    scanf("%d" , &column);

    printf("\nEnter row length of Matrix B please : ");
    scanf("%d" , &row);

    printf("\nEnter column length of Matrix B please : ");
    scanf("%d" , &column);

    system ("cls") ;

    if(row == column)
    {
        int matA[row][column] ;
        printf("\nEnter elements of Matrix A please\n");
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                printf("Enter elements of row %d column %d\n" , k+1 , r+1);
                scanf("%d" , &matA[k][r]);
            }
        }

        system("cls") ;

        int matB[row][column]  ;
        printf("\nEnter elements of Matrix B please\n");
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                printf("Enter elements of row %d column %d\n" , k+1 , r+1);
                scanf("%d" , &matB[k][r]);
            }
        }

        system ("cls") ;

        printf("\nMatrix A is : \n\n");
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                printf("\t%d   " , matA[k][r]);
            }
                printf("\n");
        }

        printf("\nMatrix B is : \n\n");
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                printf("\t%d   " , matB[k][r]);
            }
            printf("\n");
        }

        int matC[row][column] ;
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                matC[k][r] = matA[k][r] + matB[k][r] ;
            }
        }

        printf("\nMatrix C is : \n\n");
        for(k = 0 ; k < row ; k++)
        {
            for(r = 0 ; r < column ; r++)
            {
                printf("\t%d   " , matC[k][r]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("\nInvalied. Enter two Square matrix please\n");
    }
   return 0 ;
}
