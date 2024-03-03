#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}node_t;

typedef enum {EXIT,ADDATFIRST,ADDATLAST,ADDATPOS,DELFIRST,DELLAST,DELFROMPOS,TRAVERSE}MENU;
MENU menu_choice()
{
    MENU mchoice;
    printf("\n0. Exit \n");
    printf("1. Add element at First\n");
    printf("2. Add element at Last\n");
    printf("3. Add element at Position\n");
    printf("4. Delete element from First\n");
    printf("5. Delete element from Last\n");
    printf("6. Delete element from Given Position\n");
    printf("7. TraverseList\n");
    scanf("%d",&mchoice);
    return mchoice;
}
void accept_element(int *p)
{
    printf("Specify element\n");
    scanf("%d",p);
}
void display_element(const int *p)
{
    printf("Element is %d\n",*p);
}
node_t *head = NULL;
node_t *tail = NULL;

node_t * create_node()
{
    node_t *temp;
    temp = (node_t *)malloc(sizeof(node_t));
    temp->next =NULL;
    temp->prev = NULL;
    return temp;
}

void add_element_at_last(int data)
{
    node_t *newnode,*trav;
    //1. request memory at runtime for newnode
    newnode = create_node();
    //2. set data part
    newnode->data = data;
    //3. attach ele in list
        if(head==NULL)//3.1 if list is empty
        {
            head = newnode;
            tail = newnode;
        }
        else//3.2 if list is ready
        {
           newnode->prev = tail;
           tail->next = newnode;
           tail = newnode;
        }
}

int add_element_at_given_pos(int data,int pos)
{
    node_t *newnode,*trav;
    int p;
    if(pos==1)
        add_element_at_first(data);
    else if(pos==(size()+1))
        add_element_at_last(data);
    else
    {
        newnode = create_node();
        newnode->data = data;
        trav = head;
        p=1;
        while(p < pos-1)
        {
            trav = trav->next;
            p++;
        }
        newnode->prev = trav;
        newnode->next = trav->next;
        trav->next->prev = newnode;
        trav->next = newnode;
    }
}
void traverse_list_forward()
{
    node_t *trav = head;
    if(head==NULL)
        printf("List is empty ...\n");
    else
    {
        while(trav!=NULL)
        {
            printf("%d-->",trav->data);
            trav = trav->next;
        }
    }
}
void traverse_list_backward(node_t *trav)
{
    node_t *trav = tail;
    if(head==NULL)
        printf("List is empty ...\n");
    else
    {
        while(trav!=NULL)
        {
            printf("%d-->",trav->data);
            trav = trav->prev;
        }
    }
    
   
}

int main()
{
    MENU mchoice;
    int data,pos;
    while((mchoice= menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case ADDATFIRST:
                            accept_element(&data);
                            add_element_at_first(data);
                            break;
            case ADDATLAST:
                            accept_element(&data);
                            add_element_at_last(data);
                            break;
            case ADDATPOS:
                            printf("Specify a position for newnode\n");
                            scanf("%d",&pos);
                            if(pos<=0 || pos > (size()+1))
                                printf("Invalid position \n");
                            else
                            {
                                accept_element(&data);
                                add_element_at_given_pos(data,pos);
                            }
            case DELFIRST:
                        del_element_from_first();
                        break;
            case DELLAST:
                        del_element_from_last();
                        break;
            case DELFROMPOS:
                        printf("Specify a position for newnode\n");
                        scanf("%d",&pos);
                        if(pos<=0 || pos > size())
                            printf("Invalid position \n");
                        else
                            del_element_at_given_pos(pos);
                        break;
            case TRAVERSE:
                            printf("\n Traverse in Forward Direction\n");
                            traverse_list_forward();
                            printf("\n Traverse in Back Direction\n");
                            traverse_list_backward(head);
                            break;
        }
    }
    free_list();
}