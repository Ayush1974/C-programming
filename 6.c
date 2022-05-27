#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("\n Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

if(num1>num2){
if(num2>num3){
printf("\n %d is a middle number",num2);
}
else if(num3>num1){
printf("\n %d is a middle number",num1);
}
else{
printf("\n %d is a middle number",num3);
}
}
else{
if(num2<num3){
printf("\n %d is a middle number",num2);
}
else if(num3<num1){
printf("\n %d is a middle number",num1);
}
else{
printf("\n %d is a middle number",num3);
}
}

return 0;
}

