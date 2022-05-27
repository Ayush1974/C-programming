#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*int func(char str[52],char *p){ 
    return 0;
}*/
int main(){
    int a=34;
    int *ptr=NULL;
    if(ptr==NULL){
        printf("Error!");
    }
    else{
        printf("The address of a is%d\n",*ptr);
    }
return 0;
}