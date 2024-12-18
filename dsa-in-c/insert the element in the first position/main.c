/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],b[10],n,i,new,j;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the insersation element\n");
     scanf("%d",&new);
     b[0]=new;
     for(i=0,j=0;i<n;i++,j++)
    {
        b[j+1]=a[i];
    }
    printf("new array \n");
    n++;
    for(j=0;j<n;j++)
    {
       printf("%d",b[j]);
    }
    return 0;
}