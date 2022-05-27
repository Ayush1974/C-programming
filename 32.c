#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=45;
    int* ptr;
    ptr=(int*)malloc(sizeof(int));
    ptr=&a;
    printf("Value of a: %d and address:%d\n",*ptr,ptr);
    free(ptr);
    return 0;
}