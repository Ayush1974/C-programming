#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="Ayush",name1[]={'A','y','u','s','h','\0'},str[51];
    strcpy(str,"Ayush");
 int i=0;   
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
     printf("\nEnter a name:-");
    gets(name);
    printf("\nYour name :-%s\n%s",name,name1);
    printf("\n");
    puts(str);
    return 0;
}