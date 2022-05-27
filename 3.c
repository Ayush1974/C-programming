#include <stdio.h>

int main()
{
int yr;

printf("\n Enter the year : ");
scanf("%d", &yr);

if(((yr%4 == 0) && (yr%100!= 0))||yr%400== 0)
{
    printf("\n This is a leap year. ");
}
else
{
    printf("\n This is not a leap year. ");
}

return 0;
}