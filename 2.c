#include <stdio.h>

int main()
{
    int cp, sp;

    printf("\n Enter the cost price : ");
    scanf("%d", &cp);
    printf("\n Enter the selling price : ");
    scanf("%d", &sp);

    if(sp-cp>0)
    printf("\n Profit.");

    else if(sp-cp<0)
    printf("\n Loss");

    else
    printf("\n No profit no loss.");

return 0;
}