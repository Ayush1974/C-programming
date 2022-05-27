#include<stdio.h>
int changenumber(int *j){
    int temp;
    printf("\nEnter number to replace with: ");
    scanf("%d", &temp);
    *j=temp;
    return *j;
}

int main(){
    int a;
printf("Enter a number of choice:");
scanf("%d", &a);
changenumber(&a);
printf("\n a=%d",a);
return 0;
}