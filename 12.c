#include<stdio.h>
int func1(int *p){
printf("Call by refrence :You have %d ",*p);
return 0;
}
int fun(int m){
printf("Call by value :You have %d ",m);
return 0;
    
}
int main(){
int x=7;
fun(x);
printf("\n");
func1(&x);
printf("\n You have %d as the size of the int main.",sizeof(double));
return 0;
}