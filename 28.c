#include<stdio.h>

int fun(int a,int b){
    // auto int sum;
    //extern int sum;
   //  static int sum;
    register int sum;
    sum++;

    //sum=a+b;
    printf("sum = %d\n",sum);
    return sum;
}
int sum=355;
int main()
{
    int sum=fun(3,5);
  sum=fun(3,5);
  sum=fun(3,5);
  sum=fun(3,5);
  sum=fun(3,5);
  
    return 0;
}