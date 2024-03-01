#include<stdio.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef int ELEMENT;

ELEMENT info[SIZE]; //Queue of integers
int rear=-1;
int front=-1;

typedef enum {EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT,TRAVERSE}MENU;

MENU menu_choice()
{
    MENU mchoice;
    printf("\n");
    printf("0. Exit \n");
    printf("1. Push Element on queue\n");
    printf("2. Pop Element from queue\n");
    printf("3. Pop Element from queue\n");
    scanf("%d",&mchoice);
    return mchoice;
}

void accept_element(ELEMENT *p)
{
    printf("Specify element to push \n");
    scanf("%d",p);
}

void display_element(const ELEMENT *ele)
{
    printf("Element :=%d",*ele);
}

BOOL isfull()
{//keep on adding ele till size-1 but no single ele is deleted

    return (rear == SIZE-1 && front==0) || (rear+1)==front ? TRUE : FALSE;
}
void push_element(ELEMENT *p)
{
    if(rear ==SIZE-1)
        rear=0;
    else
        rear++;//manage rear area for new element
   
    info[rear] = *p;//add element on queue
    if(front==-1)
        front=0;
}
BOOL isempty()
{
    //1.initial state where queue is empty
    //2.after performing operations on queue
    return  rear==-1 ? TRUE : FALSE;
}
ELEMENT peek_element()
{
    return info[front];
}
void pop_element()
{
    info[front]=-1;//assume front most element is deleted 
   
    if(front == rear)//last element of Q is deleted 
    {
       front=-1;
       rear=-1; 
    }
    else
    {
        if(front==SIZE-1) //means above has just deleted ele from size-1 pos //now rest front to 0
            front=0;
        else
            front++; //decide which will be next front member
    }
}
int main()
{
    MENU mchoice;
    ELEMENT ele;
    while((mchoice=menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case PUSHELEMENT:
                            if(isfull())//1. if queue is full
                                printf("queue has reached to overflow state\n");//1.1 display error message
                            else//2. if queue is not full
                            {
                                accept_element(&ele);//2.1 accept ele to be pushed
                                push_element(&ele);//2.2 push element on queue
                            }
                            break;
            case POPELEMENT:
                            if(isempty())//1. if queue is empty
                                printf("queue has reached to underflow state\n");//1.1. show error message
                            else//2. if queue is not empty
                                {
                                    ele = peek_element();//2.1 peek / retrieve element
                                    display_element(&ele);//display top most ele
                                    pop_element();
                                }
                            break;
            case PEEKELEMENT:
                            if(isempty())//1. if queue is empty
                                printf("queue has reached to underflow state\n");//1.1. show error message
                            else//2. if queue is not empty
                                {
                                    ele = peek_element();//2.1 peek / retrieve element
                                    display_element(&ele);//display top most ele
                                }
                            break;
        }
    }
}