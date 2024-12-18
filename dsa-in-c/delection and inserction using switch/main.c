#include <stdio.h>

int main() {
    int a[50],size,x,pos,choice,i;
     printf("Enter the size of array : ");
    scanf("%d",&size);
    
    printf("Enter the element in array : ");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
    
        printf(" PRESS 1 for insert element at first\n ");
        printf(" PRESS 2 for insert element at last\n ");
        printf(" PRESS 3 for insert element at specific position\n ");
        printf(" PRESS 4 for delete element at first\n ");
        printf(" PRESS 5 for delete element at last\n ");
        printf(" PRESS 6 for delete element at specific position\n ");
   scanf("%d",&choice);
    switch(choice){
        case 1: printf("Enter the element, you want insert at first : ");
        scanf("%d",&x);
        for(i=size-1;i>=0;i--){
            a[i+1]=a[i]; 
        }
         a[0]=x;
    size++;
    printf("Displaying the elements: ");
    for(int i=0;i<size;i++){
        printf("  %d", a[i]);
    }break;
    case 2:printf("enter the end element");
           scanf("%d",&x);
           a[size]=x;
           size++;
           for(i=0;i<size;i++)
           {
              printf("%d",a[i]);
            }break;
      case 3:printf("Enter the element, you want insert at specific position : ");
             scanf("%d",&x);
       printf("at which position you want to insert element : ");
        scanf("%d",&pos);
        for(i=size-1;i>=pos-1;i--){
            a[i+1]=a[i];
        }
        a[pos-1]=x;
        size++;
         printf("Displaying the elements: ");
    for(int i=0;i<size;i++){
        printf("  %d", a[i]);
    }break;
       case 4:// printf("Enter the element, you want insert at first : ");
        //scanf("%d",&x);
        for(i=0;i<size;i++){
            a[i]=a[i+1]; 
        }
        // a[0]=x;
    
    size--;
    printf("Displaying the elements: ");
    for(int i=0;i<size;i++){
        printf("  %d", a[i]);
    }break;  
     case 5: printf("Displaying the elements: ");
    for(int i=0;i<size-1;i++){
        printf("  %d", a[i]);
    }break; 
    case 6:printf("In which position you want to delete element : ");
        scanf("%d",&pos);
        
        for(i=pos-1;i<size;i++){
            a[i]=a[i+1];
        }
        size--;
         printf("Displaying the elements: ");
    for(int i=0;i<size;i++){
        printf("  %d", a[i]);
    }break; 
    }
    
        

    return 0;
}