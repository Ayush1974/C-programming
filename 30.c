#include<stdio.h>
int main(){
    int x=10;
    char y='x';
    void *ptr;
    ptr=&y;
    printf("y=%c\n",*((char*)ptr));
    ptr=&x;
    printf("x=%d\n",*((int*)ptr));
    return 0;
}