#include <stdio.h>
int main(){
int m,n;
int blnExceeds = 0;
printf("Enter the number of rows and columns for matrix, eg: 2 2, 3 3 \n");
do
{
    scanf("%i%i",&m,&n);
    if(m > 5 || n > 5)
    {
        printf("The size of the square array must not exceeds 5. Retry value less than 6. \n");
        blnExceeds = 1;
    }else
    {
        blnExceeds = 0;
    }
}while(blnExceeds == 1);

int mat1[m][n];
int mat2[m][n];
int result[m][n];
int i,j;

    printf("Enter elements of matrix A :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    //Print formatted matrices
    printf("Matrix A :\n");
    for(i=0;i< m;i++)
    {
        for(j=0;j< n;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B :\n");
    for(i=0;i< m;i++)
    {
        for(j=0;j< n;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            result[i][j] = mat1[i][j]+mat2[i][j];
        }
    }
    printf("Addition: A + B = \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
   return 0;

 }
