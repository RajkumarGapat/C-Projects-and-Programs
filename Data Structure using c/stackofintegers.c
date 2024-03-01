#include<stdio.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef int ELEMENT;

ELEMENT info[SIZE];
int top=-1;

typedef enum {EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT}MENU;

MENU menu_choice()
{
    MENU mchoice;
    printf("\n");
    printf("0. Exit \n");
    printf("1. Push Element on stack\n");
    printf("2. Pop Element from stack\n");
    printf("3. Pop Element from stack\n");
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
{
    return top == SIZE-1 ? TRUE : FALSE;
}
void push_element(ELEMENT *p)
{
    top++;//manage top area for new element
    info[top] = *p;//add element on stack
}
BOOL isempty()
{
    //1.initial state where stack is empty
    //2.after performing operations on stack
    return top == -1 ? TRUE : FALSE;
}
ELEMENT peek_element()
{
    return info[top];
}
void pop_element()
{
    //assume top most element is deleted 
    top--; //decide which will be next top member
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
                            if(isfull())//1. if stack is full
                                printf("Stack has reached to overflow state\n");//1.1 display error message
                            else//2. if stack is not full
                            {
                                accept_element(&ele);//2.1 accept ele to be pushed
                                push_element(&ele);//2.2 push element on stack
                            }
                            break;
            case POPELEMENT:
                            if(isempty())//1. if stack is empty
                                printf("Stack has reached to underflow state\n");//1.1. show error message
                            else//2. if stack is not empty
                                {
                                    ele = peek_element();//2.1 peek / retrieve element
                                    display_element(&ele);//display top most ele
                                    pop_element();
                                }
                            break;
            case PEEKELEMENT:
                            if(isempty())//1. if stack is empty
                                printf("Stack has reached to underflow state\n");//1.1. show error message
                            else//2. if stack is not empty
                                {
                                    ele = peek_element();//2.1 peek / retrieve element
                                    display_element(&ele);//display top most ele
                                }
                            break;
        }
    }
}