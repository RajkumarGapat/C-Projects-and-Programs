#include <stdio.h>
#include <stdlib.h> //this header file is used here to call exit function

void main()
{ 
   FILE *p;   
   p = fopen("E:\\C Language Online Course\\my C Work\\Student Programs\\File Handling\\myOutput.txt","a"); //it will create one notepad file name is anupma
   if(p == NULL)
   {
      printf("Error!");   
      exit(1);             
   } 
fprintf(p,"\n ********************************************************* \n");
int num1,num2,sum;
char name[20];
printf("What is Your Name = ");
scanf(" %s",&name);
fprintf(p," Hello %s, \n\n",name);

printf("Enter Your first number = ");
scanf("%d",&num1);
fprintf(p,"Num1 = %d\n",num1);

printf("Enter Your second number = ");
scanf("%d",&num2);
fprintf(p,"Num2 = %d\n",num2);
fprintf(p,"Output :- \n");
sum=num1+num2;
printf("\n Sum of %d and %d = %d \n",num1,num2,sum);
fprintf(p,"\n Sum of %d and %d = %d \n",num1,num2,sum);

fprintf(p,"\n ********************************************************* \n");




   fclose(p); //closing file   
}
