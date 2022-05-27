#include<stdio.h>
#include<string.h>
int main() {
    char buf[1024],temp[1024];
    printf("Enter string:");
    gets(buf);
    strcpy(temp,(buf));
   if(strcmp(temp,strrev(buf))==0)
  {printf("\nPalindrome");}
   else
   {printf("\nNot Palindrome");}
    return 0;
}