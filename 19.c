#include<stdio.h>
int arrrev(int a[],int n)
{
    int b[n];
    for(int i=0; i<n; i++){
   b[n-1-i]=a[i];
    }
    for (int i=0; i<n; i++)
    a[i]=b[i];
    printf("\n");
    return 0;
}
int display(int a[],int n){
    for (int i=0; i<n;i++)
    printf("\n%d",a[i]);
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    const int n=sizeof(a)/sizeof(a[0]);
    display(a,n);
    arrrev(a,n);
    display(a,n);
}