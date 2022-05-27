#include<stdio.h>
int main() {
    int i,j,n;
    printf("\nEnter n->");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i==j||j==0||j==n-1)
            printf("+");
            else
            printf(" ");
        }
      
        for(int k=0;k<n;k++)
        {
             if(i==0||i==n/2||k==0||k==n-1)
            printf("-");
            else
            printf(" ");
        }
      

         for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1||i==n/2)
            {
                printf("|");}
            else if(i>n/2&&j==n-1)
            printf("|");
            else if(i<n/2&&j==0)
            printf("|");

            else
            printf(" ");
        }
    
              for(int k=0;k<n;k++)
        {
             if(i==0||i==n/2||k==0||k==n-1)
            printf(".");
            else
            printf(" ");
        }
        printf("\n");}
        return 0;}