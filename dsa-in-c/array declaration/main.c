/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],n,i;
    
    printf("Enter the size of a array n");
    
    scanf("%d",&n);
    
    printf("Enter the elements");
    
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);
        
    }
    
    printf("diplaying the elelment");
    
    for(i=0;i<n;i++)
    {
        
        printf("%d",a[i]);
        
    }

    return 0;
}


   
