#include<stdio.h>
union students{
    float roll;
    int id;
}s1;

int main()
{
    printf("Enter the roll number: ");
    scanf("%f", &s1.roll);
    printf("\nEnter the id: ");
    scanf("%d", &s1.id);
    printf("Roll number\tId\n%f\t%d",s1.roll,s1.id);
    return 0;	
}