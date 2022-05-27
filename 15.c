#include<stdio.h>
int arr(int a[])
{ int sum=0;
    for(int i = 0; i < 5; i++)
    {sum += a[i];}
printf("Sum: %d",sum);
    return 0;
}
int main()
{ int a[5];
for (int i = 0; i < 5; i++)
{printf("Enter a number:");
    scanf("%d", &a[i]);}
    arr(a);
    return 0;
}
