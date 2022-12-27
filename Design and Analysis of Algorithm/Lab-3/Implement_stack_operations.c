//Implement stack operations(Push,Pop,Peep,Change,Display)
#include<stdio.h>
void push();
void pop();
void peep();
void change();
void display();

int a[10];
    int top=-1,x,s,n1,n2,i;

	
void main(){
	

    printf("\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.PEEP \n 5.CHANGE \n 6.EXIT \n");
    int ch;

    do
		{
			printf("Enter your choice:");
			scanf("\n%d",&ch);
        

			switch(ch)
			{
				case 1:
				{
					push();
					break;
				}
				case 2:
				{
					pop();
					break;
				}
				case 3:
				{
					display();
					break;
				}
				case 4:
				{
					peep();
					break;
				}
				case 5:
				{
					change();
					break;
				}
				case 6:
				{
					printf("Exit");
					break;
				}
				default:
				{
			        printf("\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.PEEP \n 5.CHANGE \n 6.EXIT");
				}
			}
		}
		while(ch!=6);
	}
	
	void push()
    {
        if(top>=10){
            printf("Stack Overflow!\n");
        }
        else{
            printf("Enter a value to insert:");
            scanf("\n%d",&x);
            top++;
            a[top]=x;
        }
    }

     void pop()
		{
			if(top<=-1)
			{
				printf("Stack Underflow\n");
			}
			else{
				printf("\n the popped element is %d\n",a[top]);
				top--;
			}
		}
    
     void peep()
		{
			printf("\n Enter position for search:");
			scanf("%d",&s);
            
			if(top-s<=-1)
			{
				printf("Stack Overflow\n");
				return;
			}
			else
			{
				printf("\nThe element is %d:",a[top-s]);
			}
		}

     void change()
		{
			printf("Enter position for change:");
			scanf("%d",&n1);
            
			printf("Enter number for update:");
			scanf("%d",&n2);

			if(top-n1<=-1)
			{
				printf("Stack Underflow\n");
				return;
			}
			else{
				a[top-n1]=n2;
				printf("Update Successful.....!\n");
			}
		}

     void display()
		{
			if(top>=0)
			{
				printf("\n The elements in stack are....\n");
				for(i=top;i>=0;i--)
				{
					printf("%d\n",a[i]);
					
				}
			}
			else
			{
				printf("The stack is empty\n");
			}
		}
	
