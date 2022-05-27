#include<stdio.h>

int main()
{
    int n,sum=0;
for(int i=0;i<10;i++)  
{    printf("\n Enter the number:");
    scanf("%d",&n);
  sum+=n;
} 
printf("\n sum = %d\n",sum);
printf("\n avg = %d\n",sum/10);
    return 0;
}