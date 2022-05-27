#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str1[50];
    //strcpy()
    strcpy(str,"\nHello");
    strcpy(str1," World!");
    //strcat()
    puts(strcat(str,str1));
    //strlen()
    printf("\nyou have length %d\n",strlen(str));
    //strrev()
   puts(strrev(str));
    //strcmp()
printf("you have %d\n",strcmp(str,str1));
return 0;
}