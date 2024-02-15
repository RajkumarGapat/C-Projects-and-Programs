#include<stdio.h>
int a=100; //This is global variable,it can access by any function
void show()
{
    
    printf("a = %d",a);
} //Ending of variable a here as it is local variable of show
void student()
{
    printf("Student Id = %d \n ",a);
}
void main()
{
    show();
    student();

    printf("a = %d",a);

}

/* Q:- Need of Global variable :-
Ans: - when we need one variable of any function in multiple functions so convert that variable into global variable */