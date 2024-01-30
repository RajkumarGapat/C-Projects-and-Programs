// C program to illustrate nested-if statement
#include <stdio.h>

void main()
 {
    int i; //it will be always when your value will be digit

    printf("Give me number = ");
    scanf("%d",&i); // user se value lena

   // i=45; //khud se value dena 

	if (i == 10)
    {
		printf("i is 10");
    }
	else if (i == 15)
    {
		printf("i is 15");
    }
	else if (i == 20)
    {
		printf("i is 20");
    }
    else if(i == 19)
    {
        printf("Hello I am your varibale i and my value is 19");
    }
	else
    {
		printf("i is not present");
    }
}

