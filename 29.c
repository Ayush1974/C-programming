#include<stdlib.h>
#include<stdio.h>
int main()
{
    char *ptr,ch='y';
    int i=1,chars;
    while (i<=3||ch!='y')
    {
    printf("\nEmployee%d:Enter the number of characters in Employee Name=>",i);
    scanf("%d",&chars);
    ptr=(char*)malloc((chars+1)*sizeof(char));
    printf("\nEnter the employee id =>");
    scanf("%s",ptr);
    printf("\nThe employee id is=>%s\n",ptr);
    free(ptr);
    getchar();
    printf("\nDo you want to continue(y/n)?");
    scanf("%c",&ch);
        i++;	
    }
    
}