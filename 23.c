#include<stdio.h>
#include<math.h>
int main()
{
    int row,a=1,n;
    printf("enter a random number:");
    scanf("%d",&row);
    printf("\nEnter the power:");
    scanf("%d",&n);
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<=i; j++)
        {
        
        printf("%.0f ",pow(a,n));
        a++;
    }
    printf("\n");
}
return 0;
}