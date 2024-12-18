/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int top=-1,stack[10],n,i,x;
    printf("\n enter size of the stack:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if (top==n-1)
        {
            printf("\n stack overflow");
        }
        else
        {
            printf("\n enter the element to the stack:");
            scanf("%d",&x);
            top=top+1;
            stack[top]=x;
        }
    }
    if(top==-1)
    {
        printf("\n underflow");
    }
    else
    {
        printf("\n elements present in the stack:\n");
        for(i=top;i>=0;--i)
        printf("%d",stack[i]);
    }
 }
 



