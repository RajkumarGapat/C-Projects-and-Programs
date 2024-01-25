#include<stdio.h>
void main()
{
    printf("\n\n \t\t\t****** \tWelcome to ICICIbank.com   ******\n\n");
    int pin,op,amount=90000,other_Ac,other_am,balance;
    printf("Enter your pin = ");
    scanf("%d",&pin);

    switch(pin)
    {
        case 3456:
        //Options program starts from here ***********************
        printf("\n 1. Balance Enquiry \n");
         printf("\n 2. Cash Withdrawl \n");
         printf("\n 3. Change Pin \n ");
         printf("\n 4. Send Money \n");
         printf("\n 5. Help \n");
         printf("\n Enter Your Option = ");
         scanf("%d",&op);      

         //printf("\nUser entered option no %d\n",op);
      //code to handle above 5 options starts here 
       switch(op)
       {
           case 1:
           printf("Balance Enquiry code will be here ");
           break;

           case 2:
           printf("Cash Withdrawl code will be here ");
           break;

           case 3:
           printf("Change pin code will be here ");
           break;

           
           case 4:
           //printf("Send Money code will be here ");
           printf("Enter account number to send money = ");
           scanf("%d",&other_Ac);
           printf("Enter amount to send moeny = ");
           scanf("%d",&other_am);
           balance=amount-other_am;
           printf("So %d amount transfered Successfully !! \n",other_am);
           printf("Your current balance amount is %d Rs. \n",balance);
           break;
        
           case 5:
           //printf("Help code will be here ");
           printf("\n Write to us at \n ICICI Bank Limited");
           printf("ICICI Phone Banking Center, ICICI Bank Tower,\n 7th floor, Survey no: 115/27, Plot no. 12,\n");
           printf(" Nanakramguda, Serilingampally,\n Hyderabad - 500032.");
           printf("\n\n Visit the Help Desk at any Branch or drop us a line at\n Our Branch / ATM / Bank@Home DropBox / ATM Sharing");
           break;

           default:
           printf("Invalid Option !!");

       }

      //code to handle above 5 options ends here 








         //Options program ends here ******************************
        break;


        default:
         printf("Sorry Invalid Pin !!");
    }

printf("\n \n \t\t \t \t Copyright@ 2020 . All rights Reserved. \n\n");

}