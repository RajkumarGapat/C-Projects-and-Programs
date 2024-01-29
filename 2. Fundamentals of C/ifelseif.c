#include<stdio.h>
void main()
{
    int sid;
    
    char fname[10]; // this is char array variable nd we will use %s for this ,this can store 10 characters
    char lname; // this is simple char variable nd we will use %c for this, this can store one character
    float eng,mat,phy;
    float total;
    float per;

    printf("Enter Student id = ");
    scanf("%d",&sid);

    printf("Enter Student Name = ");
    scanf(" %s",&fname); //here s means string like word

    printf("Enter first letter of your surname = ");
    scanf(" %c",&lname);

    printf("Enter English Marks = ");
    scanf("%f",&eng);

     printf("Enter Maths Marks = ");
    scanf("%f",&mat);

     printf("Enter Physics Marks = ");
    scanf("%f",&phy);

total=eng+mat+phy;
printf("\n Hey %s %c dear ,Your total marks = %f \n ",fname,lname,total);

per=total/3;

printf("\n Your Percentage = %f \n",per);
if(per>90)
{
    printf("You Got A Grade !!");
}
else if(per>70)
{
    printf("You Got B Grade !!");
}
else
{
    printf("You Got C Grade !!");
}






}