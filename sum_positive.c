#include<stdio.h>

int main()
{
    int n,sum=0;
for(int i=0;i<10;i++)  
{    printf("\n Enter the number:");
    scanf("%d",&n);
    if(n<0){
        continue;
    }
  sum+=n;
} 
printf("\n sum = %d\n",sum);

    return 0;
}