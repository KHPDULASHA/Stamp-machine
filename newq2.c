#include <stdio.h>

int main()
{
    int m,n;
    int i,j;
    int product[m][1];
    int sum;


    //Input the dimensions of table A;
    printf("Enter the number of rows (m)in table A:\n");
    scanf("%d",&m);
    printf("Enter the number of columns (n)in table A:\n");
    scanf("%d",&n);
    int A[m][n];


    //part 1
    printf("Enter the elements of matrix A:\n");
    for (i=0; i<m; i++)
        {
            for (j=0;j<n;j++)
            {
               scanf("%d",&A[i][j]);
            }
        }

    // part 2

    int X[n][1];
    printf("Enter the elements of matrix X:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    //part 3

    int Y[m][1];
    printf("AX=Y\n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            sum += A[i][j] * X[j][0];
        }
        Y[i][0] = sum;
        sum=0;
    }

    printf("Resulting Matrix\n");

    for (i=0; i<m; i++)
    {
        printf("|%d| \n",Y[i][0]);
    }
    return 0;
}






