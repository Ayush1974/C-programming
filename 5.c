#include <stdio.h>
#include<string.h>

int main()
{
    int marks;
    char grade[5];
    
    printf("Enter marks : ");
    scanf("%d", &marks);

    if(marks>=90)
    {
        strcpy(grade,"A+");
    }
    else  if(marks>=80&& marks<90)
    {
         strcpy(grade,"A");
    }
    else  if(marks>=70&& marks<80)
    {
         strcpy(grade,"B");
    }
    else  if(marks>=60&& marks<70)
    {
         strcpy(grade,"C");
    }
    else  if(marks>=50&& marks<60)
    {
 		strcpy(grade,"D");
    }
    
    else  if(marks>=40&& marks<50)
    {
        strcpy(grade,"P");
    }
    else
    {
		strcpy(grade,"F");
	}	
    printf("\nYour grade is: %s",grade);
    return 0;
}