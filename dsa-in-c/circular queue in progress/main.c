//queue program using ADT
#include<stdio.h>
#include<stdlib.h>

int front=-1,rear=-1,n,queue[10],x;

void Enqueue();
void Dequeue();
void Show();

int main()
{
    int choice;
    printf("enter the size of the queue");
    scanf("%d",&n);
    while(1)
    {
        printf("\n 1.Enqueue 2.Dequeue 3.Show 4.End");
        printf("\n enter the choice");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:Enqueue();
            break;
            case 2:Dequeue();
            break;
            case 3:Show();
            break;
            case 4:exit(0);
            
            default:printf("\n invaild choice \n enter the choice between 1 to 4");
        }//end of switch
    }//end of while loop
}//end of main
        
        void Enqueue ()
        {
            printf("\n enter the element for insertation in queue");
            scanf("%d",&x);
            
            if(rear==n-1)
            {
                printf("\n overflow!!");
            }
            else if(front==-1&&rear==-1)
            {
                front=rear=0;
                queue[rear]=x;
            }
            else
            {
                rear++;
                queue[rear]=x;
            }
        
            
        }
    
    
            void Dequeue()
        {
            printf("\n enter the element for insertation in queue");
            scanf("%d",&x);
            int i;
            if(front==-1 && rear==-1)
            {
                printf("\n underflow!!");
            }
            else if(front==0 && rear==-1)
            {
                front=-1;
                printf("\n underflow ");
            }
            else
            {
                printf("Deleted element is:%d\n",queue[front]);
                
            for(i=front;i<rear;i++)
            {
                queue[i]=queue[i+1] ;
            }
            rear--;
            }
        }
        
    
            void Show()
        {
            int i;
             if (front == - 1)
            printf("Queue is Empty \n");
            
            else
           {
            for (i = front; i <= rear; i++)
                printf("%d ", queue[i]);
            }
            
        }


