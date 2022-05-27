#include<stdio.h>
struct student{
    int roll;
    float marks;
}a;
void enter(){
    printf("Enter the roll no. :-");
    scanf("%d", &a.roll);
    
    printf("Enter the marks :-");
    scanf("%f", &a.marks);
   

}
void display(){
    printf("Roll No:-%d \n Marks:-%.2f ", a.roll, a.marks );
    
}

int main() {
enter();
display();
return 0;
}