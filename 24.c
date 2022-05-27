-#include<stdio.h>
int main()
{
    typedef int* intpointer;
intpointer a,b;
int c=89;
a=c;
b=&c;
printf("a=%d, &b=%u",a,b);
    return 0;
}