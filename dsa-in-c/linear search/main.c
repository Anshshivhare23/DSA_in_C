#include <stdio.h>
int main()
{
    int a[10],n,i,x,flag=0;
    printf("enter the number of array n");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no to find");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
        printf("number found at position %d",i+1);
        flag=1;
        }
    }
    if(flag==0)
    {
        printf("number not found");
    }
    
}
