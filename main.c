#include <stdio.h>
int main(){
int m,n;
int blnExceeds = 0;
printf("Enter the number of rows and columns for matrix, eg: 2 2, 3 3 \n");
//validating array size
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
//Variable Declarations
int mat1[m][n];
int mat2[m][n];
int result[m][n];
int i,j;

    printf("Enter elements of matrix A :\n");
    //scanning user input
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n");
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
    //computing matrices
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            result[i][j] = mat1[i][j]+mat2[i][j];
        }
    }
    //printing results
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
