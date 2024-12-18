/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
   int a[10];
    int n,i,x;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("display elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n1st element position is deleted");
    for(i=1-1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("\ndisplay elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
