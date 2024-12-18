/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],n,i,x;
    printf("Enter the size of array n");
    scanf("%d",&n);
    printf("Enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the end element");
    scanf("%d",&x);
    a[n]=x;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}