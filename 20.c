// structure
#include<stdio.h>
struct a{
    char name[25];
    int roll_no;
}a1[5];
int main(){
     printf("%d\n",sizeof(a1)/sizeof(a1[0]));
for(int i=0;i<5;i++)
{
    printf("Enter name:-");
    scanf("%s",&a1[i].name);

    printf("Enter roll no:-");
    scanf("%d",&a1[i].roll_no);
}
for(int i=0;i<5;i++)
{  printf("\nName:-%s",a1[i].name);
    printf("\nRoll no:-%d",a1[i].roll_no);  
}
return 0;
}