#include<stdio.h>
int swap(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return 0;
}
int main() {
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Your numbers are: %d,%d",a,b);
    return 0;
}