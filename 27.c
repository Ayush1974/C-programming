#include<stdio.h>
struct driver{
    char name[50];char dl_no[25];
    char route[50];int kms;
}d[3];
int main()
{     int i;
    for (i =0;i<3;i++){
    printf("\nENTER A DETAILS OF A DRIVER\n");
    printf("\n ENTER THE NAME: ");
    // scanf("%s",&d[i].name);
    scanf("%s",d[i].name);
    printf("\n ENTER THE DRIVING LICENSE NUMBER: ");
    scanf("%s",d[i].dl_no);
    printf("\n ENTER THE ROUTE: ");
    scanf("%s",d[i].route);
    printf("\n ENTER THE DISTANCE: ");
    scanf("%d",&d[i].kms);
}

    for (i =0;i<3;i++){
    printf("\nDETAILS OF DRIVERS\n");
    printf("\nNAME: ");
    // scanf("%s",&d[i].name);
    puts(d[i].name);
    printf("\nDRIVING LICENSE NUMBER: ");
    puts(d[i].dl_no);
    printf("\nROUTE: ");
    puts(d[i].route);
    printf("\nDISTANCE: ");
    printf("%d",d[i].kms);
}

return 0;}