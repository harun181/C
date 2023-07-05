#include <stdio.h>

int main()
{
    int m,n;                 //Matrix Size Declaration
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   //Matrix Size Initialization
    int arr[10][10];        //Matrix Size Declaration
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)    //Matrix Initialization
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe elements in the matrix are: \n");
    for(int i=0;i<m;i++)     //Print the matrix
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int i = 0, j;
    int max = 0;
    int res[m];
    while (i < m)   //Check for the largest element in an array
    {
       for ( j = 0; j < n; j++)
       {
           if (arr[i][j] > max)
           {
              max = arr[i][j];
           }
        }
        res[i] = max;
        max = 0;
        i++;
    }
    for(int i = 0; i < n; i++)      //Print the largest element in an array
    {
       printf("Largest element in row %d is %d \n", i, res[i]);
    }
    
    return 0;
}