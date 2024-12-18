/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
   int b[10];
    int m,j,y;
    printf("enter the size of array");
    scanf("%d",&m);
    printf("enter the elements");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("display elements are:");
    for(j=0;j<m;j++)
    {
        printf("%d",b[j]);
    }
    printf("enter element position to be deleted");
    scanf("%d",&y);
    for(j=y-1;j<=m-1;j++)
    {
        b[j]=b[j+1];
    }
    m--;
    printf("display elements are:");
    for(j=0;j<m;j++)
    {
        printf("%d",b[j]);
    }
}
