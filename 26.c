#include <stdio.h>
#include <stdlib.h>

// lifo:stack
int push(int n)
{
}
int pop()
{
}
int main()
{
    int n;
    printf("\nENTER size =>");
    scanf("%d", &n);
    int *ptr;
    // malloc()
    // ptr = (int *)malloc(n* sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\nEnter the number to push at %d :\n",i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\n number at %d :%d\n",i,ptr[i]);
    // }
    //calloc()
ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the number to push at %d :\n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n number at %d :%d\n",i,ptr[i]);
    }
   printf("\nENTER new size =>");
    scanf("%d", &n);
ptr= (int *)realloc(ptr,n*sizeof(int));
  for (int i = 0; i < n; i++)
    {
        printf("\nEnter the number to push at %d :\n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n number at %d :%d\n",i,ptr[i]);
    }
    free(ptr);
    
    return 0;
}