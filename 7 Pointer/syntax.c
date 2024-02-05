#include<stdio.h>
void main()
{
    //how to declare a simple variable
    int a,num;

    //how to declare a pointer variable
    int *p; //here p is pointer variable

    //how to imitilize a simple variable
    a=10;

    //how to initilize pointer variable
    p=&a; //assigning address of a variable to pointer variable

    printf("\n display value and address of a vairble without pointer :- \n");
    printf("Value of a variable = %d\n",a);
    printf("Address of a variable = %d\n",&a);

    printf("\n display value and address of a vairble with pointer :- \n");
    printf("Value of a variable = %d\n",*p);
    printf("Address of a variable = %d\n",p);

    printf("Enter Your number = ");
    scanf("%d",&num);
    p=&num; //assigning address of num variable to pointer variable

   

    printf("\n display value and address of num vairble with pointer :- \n");
    printf("Value of num variable = %d\n",*p);
    printf("Address of num variable = %d\n",p);



}