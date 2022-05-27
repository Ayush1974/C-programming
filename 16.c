#include<stdio.h>
int sum(int* ptr) { 
    int sum = 0;
    for(int i = 0; i <5;i++)
    {sum+=*(ptr+i);}
    printf("Sum= %d\n",sum);
    return 0;}
int main() {
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    sum(a);
    return 0;
}