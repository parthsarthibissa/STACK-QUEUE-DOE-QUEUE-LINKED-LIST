#include<stdio.h>
#include<stdlib.h>
#define max 5
void stack()
{
	int top=-1;
	int arr[max];
	int a,i,ch;
	void push()
	{	
		if(top==max-1)
		{
			printf("STACK FULL\n");
		}
		else
		{
			top++;
			printf("ENTER ELEMENT\n");
			scanf("%d",&a);
			arr[top]=a;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			printf("STACK EMPTY\n");
		}
		else
		{
			printf("DELETED ELEMENT IS %d\n",arr[top]);
			top=top-1;
		}
	}
	void disp()
	{
		if(top==-1)
		{
			printf("STACK EMPTY\n");
		}
		else
		{
			printf("QUEUE IS :: \t");
			for(i=top;i>=0;--i)
			{
				
				printf("%d\t",arr[i]);
			}
		}
	}
	while(1)
	{
		printf("ENTER YOUR CHOICE \n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");	
		scanf("%d",&ch);
	
		switch (ch)
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
				disp();
				break;
			}
			case 4:
			{
				exit(0);
				break;
			}
			default : 
			{
				printf("WRONG CHOICE\n");
			}

		}
	}
}
void queue()
{
	int a,ch,i;
	int arr[10];
	int front=-1;
	int rear=-1;
	
	void insr()
	{
 	   
    		if (rear == max - 1)
    		{	
			printf("Queue Overflow \n");
    	
		}
		else
    		{
	        	if (front == - 1)
        		
        		front = 0;
        		printf("Inset the element in queue : ");
        		scanf("%d", &a);
        		rear = rear + 1;
        		arr[rear] = a;
    		}
	} 
 
	void del()
	{
		    if (front == - 1 || front > rear)
		    {
        			printf("Queue Underflow \n");
        			return ;
    		    }	
    		    else
    		    {
        		printf("Element deleted from queue is : %d\n", arr[front]);
        		front = front + 1;
    		    }
	}
 
	void dis()
	{
    			
    		if (front == - 1)
		{
        		printf("Queue is empty \n");
		}    		
		else
    		{
        		printf("Queue is : \n");
        		for (i = front; i <= rear; i++)
			{        	    	
				printf("%d ",arr[i]);
        			printf("\n");
			}
    		}
	}
	while(1)
	{
		printf("ENTER YOUR CHOICE \n");
		printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");	
		scanf("%d",&ch);
		
		switch (ch)
		{
			case 1:
			{
				insr();
				break;
			}
			case 2:
			{
				del();
				break;
			}
			case 3:
			{
				dis();
				break;
			}
			case 4:
			{
				exit(0);
				break;
			}
			default : 
			{
				printf("WRONG CHOICE\n");
			}

		}
	}
}		
void cirqueue()
{
	int a,ch,i;
	int arr[10];
	int front=-1;
	int rear=-1;
	void insert()
	{
		if((front == 0 && rear == max-1) || (front-rear==1))
		{
			printf("QUEUE FULL");
		}
		else
		{	if(front==-1 && rear==-1)
			{
				front=0;rear=0;
				printf("INSERT ELEMENT\n");
				scanf("%d",&a);
				rear=rear+1;
				arr[front]=a;
			}
		}
	}
	void delete()
	{
		if(front==-1)
		{
			printf("QUEUE EMPTY");
		}
		else if(front==rear)
		{
			printf("DELETED ELEMENT IS :: \n %d",arr[front]);
			front=rear=-1;
		}
		else
		{
			printf("DELETED ELEMENT : %d",arr[front]);
			front++;
		}
	}
	void display()
	{
		if(front==-1)
		{
			printf("QUEUE EMPTY\n");
		}
		else if(front>rear)
		{
			printf("QUEUE IS :: ");
			for(i=front;i<=max-1;i++)
			{
				printf("%d\t",arr[i]);

			}
			for(i=0;i<=rear;i++)
			{
				printf("%d\t",arr[i]);
			}
		}		
		else
		{	
			printf("QUEUE IS : \n");
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",arr[i]);
			}
		}
		
	}
	while(1)
	{
		printf("ENTER YOUR CHOICE \n");
		printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");	
		scanf("%d",&ch);
		
		switch (ch)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
			{
				delete();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				exit(0);
				break;
			}
			default : 
			{
				printf("WRONG CHOICE\n");
			}

		}
	}
}
void deque()
{
	int a,ch,i;
	int arr[10];
	int left=-1;
	int right=-1;
	void inrleft()
	{
		if((left==0 && right==max-1)||(left==right+1))
		{
			printf("QUEUE FULL");
		}
		else if(left==-1 && right==-1)
		{
			left=right=0;								
			printf("INSERT ELEMENT\n");
			scanf("%d",&a);
			arr[left]=a;
		}
		else if (left==0)
		{
			left=max-1;
			printf("INSERT ELEMENT\n");
			scanf("%d",&a);
			arr[left]=a;
		}
		else			
		{
			left--;
			printf("INSERT ELEMENT\n");
			scanf("%d",&a);
			arr[left]=a;
		}	
	}
	void inserright()
	{
		if((left==0 && right==max-1)||(left==right+1))
		{
			printf("QUEUE FULL");
		}
		else if(left==-1 && right==-1)
		{
			left=right=0;								
			printf("INSERT ELEMENT\n");
			scanf("%d",&a);
			arr[right]=a;
		}
		else if (right==max-1)
		{
			right=0;
			printf("INSERT ELEMENT\n");
			scanf("%d",&a);
			arr[right]=a;
		}
		else			
		{
			right++;
			printf("INSERT ELEMENT\n");
			scanf("%d",&a);
			arr[right]=a;
		}
		
	
	}
	void deleleft()
	{
		if(left==-1 && right==-1)
		{
			printf("QUEUE EMPTY");
		}
		else if(left==right)
		{
			printf("DELETED ELEMENT\n");
			left=right=-1;
		}
		else if(left==max-1)
		{
			printf("DELETED ELEMENT");
			left=0;
		}
		else
		{
			printf("DELETED ELEMENT\n");
			left++;
		}
	}	
	void delright()
	{
		if(left==-1 && right==-1)
		{
			printf("QUEUE EMPTY");
		}
		else if(left==right)
		{
			printf("DELETED ELEMENT\n");
			left=right=-1;
		}
		else if(right==max-1)
		{
			printf("DELETED ELEMENT");
			right=0;
		}
		else
		{
			printf("DELETED ELEMENT\n");
			right--;
		}
	}
		
		
	void display()
	{
		if(left==-1 && right==-1)
		{
			printf("QUEUE EMPTY\n");
		}
		else if(left<=right)
		{
			printf("QUEUE IS :: ");
			for(i=left;i<=right;i++)
			{
				printf("%d\t",arr[i]);

			}
		}
		else
		{
			for(i=left;i<=max-1;i++)
			{
				printf("%d\t",arr[i]);
			}
			for(i=0;i<=right;i++)
			{
				printf("%d\t",arr[i]);
			}
		}
	}
	while(1)
	{
		printf("ENTER YOUR CHOICE \n");
		printf("1.INSERT LEFT\n2.ISNERT RIGHT\n3.DELETE LEFT\n4.DELETE RIGHT\n5.DISPLAY\n6.EXIT\n");	
		scanf("%d",&ch);
		
		switch (ch)
		{
			case 1:
			{
				inrleft();
				break;
			}
			case 2:
			{
				inserright();
				break;
			}
			case 3:
			{
				deleleft();
				break;
			}
			case 4:
			{
				delright(0);
				break;
			}
			case 5 :
			{
				display();
				break;
			}
			case 6 :
			{
				exit(0);
				break;
			}
			default : 
			{
				printf("WRONG CHOICE\n");
			}
		}
	}
}
void link()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *start = NULL;
	void create()
	{	
		 struct node *new,*ptr;
	        new=(struct node *)malloc(sizeof(struct node));
	        if(new==NULL)
	        {
	                printf("\nOut of Memory Space:\n");
	                exit(0);
	        }
	        printf("\nEnter the data value for the node:\t");
	        scanf("%d",&new->data);
	        new->next=NULL;
	        if(start==NULL)
	        {
	                start=new;
	        }
	        else
	        {
	                ptr=start;
	                while(ptr->next!=NULL)
	                {
	                        ptr=ptr->next;
	                }
	                ptr->next=new;
	        }
	}
	void display()
	{
		struct node *ptr;

		
			ptr=start;
			while(ptr!=NULL)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
				
			}
			printf("\n");
		
	}
	void insbeg()
	{
	        struct node *new;
	        new=(struct node *)malloc(sizeof(struct node));
	        if(new==NULL)
	        {
	                printf("\nOut of Memory Space:\n");
	                return;
	        }
	        printf("\nENTER ELEMENT :\t" );
	        scanf("%d",&new->data);
	        new->next =NULL;
	        if(start==NULL)
	        {
	                start=new;
	        }
	        else
	        {
	                new->next=start;
	                start=new;
	        }
	}
	void insend()
	{
		struct node *new,*ptr;
		new=(struct node *)malloc(sizeof(struct node));
		if(new==NULL)
		{
			printf("\nNO MEMORY\n");
		}
		printf("\n ENTER ELEMENT : \n");
		scanf("%d",&new->data);
		new->next=NULL;
		if(start==NULL)
		{
			start=new;
		}
		else
		{
			ptr=start;	
			while ( ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=new;
			new->next=NULL;
		}
	}
	void insaft()
	{
		int c,num;
		struct node *new,*ptr,*preptr;
		new=(struct node*)malloc(sizeof(struct node));
		ptr=start;
		preptr=ptr;				
		printf("\nENTER NODE AFTER WHICH YOU WANT TO INSERT\n");
		scanf("%d",&num);
		printf("ENTER DATA ELEMENT FOR THE NODE : : \n");
		scanf("%d",&c);
		new->data=c;
		new->next=NULL;
		while(preptr->data!=num)
		{
			preptr=ptr;			
			ptr=ptr->next;
		}
		preptr->next=new;
		new->next=ptr;
				
	}
	void delbeg()
	{
		struct node *ptr;
		ptr=start;		
		start=start->next;
		free (ptr);
	}
	void delend()
	{
		struct node *ptr,*preptr;
		ptr=start;
		preptr=ptr;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		preptr->next=NULL;
		free (ptr);
	}
		
		
	
		while(1)
		{	
			int ch;
			printf("ENTER YOUR CHOICE \n");
			printf("1.CREATE\n2.INSERT AT BEGINNIG\n3.INSERT AT END\n4.DISPLAY\n5.INSERT AFTER A NODE\n6.DELETE BEGINNING\n7.DELETE END\n8.EXIT\n");
			scanf("%d",&ch);
				switch(ch)
				{	
					case 1:
					{
						create();
						break;
					}
					case 2 :
					{
						insbeg();
						break;
					}
					case 3 :
					{
						insend(0);
						break;
					}
					case 4 :
					{
						display();
						break;
					}
					case 5:
					{
						insaft();
						break;
					}
					case 6:
					{
						delbeg();
						break;
					}
					case 7 :
					{
						delend();
						break;
					}
					case 8:
					{
						exit(0);
						break;
					}
					
					default :
					{
						printf("WRONG CHOICE \n");
					}
				}
		}
	
}
void main()
{
	int b;
	printf("ENTER YOUR CHOICE :: \n");
	printf("\n1.STACK\n2.QUEUE\n3.CIRCULAR QUEUE\n4.DOUBLE ENDED QUEUE\n5.LINKED LIST\n6.EXIT\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:
			{
				stack();
				break;
			}
		case 2:
			{
				queue();
				break;
			}
		case 3:
			{
				cirqueue();
				break;
			}
		case 4:
			{
				deque();
				break;
			}
		case 5:
			{
				link();
				break;
			}
		case 6 :
			{
				exit(0);
				break;
			}
		
		default : 
			{
				printf("WRONG CHOICE\n");
			}
		}
}
