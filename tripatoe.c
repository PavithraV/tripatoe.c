#include<stdio.h>
#include<conio.h>
void main()
{
    int rows,i,j,odd=1,even=2;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i+=2)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",odd);
            odd+=2;
        }
        printf("\n");
        for(j=1;j<=i+1;j++)
        {
            printf("%d ",even);
            even+=2;
        }
        printf("\n");
    }
  
}
