//write a program to apply authentication to your program by switch or nested switch
#include<stdio.h>


void main()
{
    printf("\n \n \t\t \t***** Welcome to ICICIBank.com ***** \n\n");
     int lastPin=3456,pin,oldp,newP,amount=90000,op,pr,other_Ac,other_am,balance,atype;
      int withdraw; // global variable
     printf("Enter Your Pin Code = ");
     scanf("%d",&pin);  



    
     
     if(pin==lastPin)
     {
        //More Programs will starts from here
         printf("\n 1. Balance Enquiry \n");
         printf("\n 2. Cash Withdrawl \n");
         printf("\n 3. Change Pin \n ");
         printf("\n 4. Send Money \n");
         printf("\n 5. Help \n");
         printf("\n Enter Your Option = ");
         scanf("%d",&op);

         switch(op)
         {
             case 1:
             printf("Avaialble Amount %d Rs. \n",amount);
             printf("Do You want to print receipt? press 1 for yes or 2 for no");
             scanf("%d",&pr);
             if(pr==1)
             {
                 printf("Please collect your receipt !!");
             }
             else
             {
                printf("Thanks for Saving Our Tree !! ");
             }
              printf("\n \n \t\t \t***** Thanks for Joining, Please come back !! ***** \n\n");
             break;

             case 2:
             //case withdrawl Module starts here 
             printf("1. Saving Account \n ");
              printf("2. Current Account \n ");
              printf("Enter Account Type = ");
              scanf("%d",&atype);
              switch(atype)
              {
                  case 1:
                 
                  printf("Enter amount to withdraw = ");
                  scanf("%d",&withdraw);
                  if(withdraw<=amount)
                  {
                      printf("\n Please collect your cash carefully !!\n");
                      balance=amount-withdraw;
                      printf("Your Balance amount is now %d Rs. \n",balance);
                      printf("\n \n \t\t \t***** Thanks for Joining, Please come back !! ***** \n\n");
                  }
                  else
                  {
                      printf("Sorry Insufficient Amount in your account !!");
                  }


                  break;

                  default:
                  printf("\n You can visit our branch \n");
              }
             //case withdrawl Module Ends here 
             break;

        case 3:
             printf("Enter Your old Pin = ");
            scanf("%d",&oldp);
            if(lastPin==oldp)
            {
               printf("Enter your new Pin = ");
               scanf("%d",&newP);
               lastPin=newP;
                printf("Your %d is sucessfully changed !!",newP);
           }
           else{
               printf("Sorry you have entered wrong old pin !!");
            }
             break;

             case 4:
             printf("Enter account no to send money ");
             scanf("%d",&other_Ac);
             printf("Enter Amount to send = ");
             scanf("%d",&other_am);
             balance=amount-other_am;
             printf("Successfully transfered %d Rs. to account no %d \n",other_am,other_Ac);
             printf("Your Balance amount is now %d Rs. \n",balance);
             printf("\n \n \t\t \t***** Thanks for Joining, Please come back !! ***** \n\n");
             break;

             case 5:
             printf("Write to us at \t \n ICICI Bank Limited \n \n\n ICICI Phone Banking Center, ICICI Bank Tower,");
printf(" \n 7th floor, Survey no: 115/27, Plot no. 12,\n Nanakramguda, Serilingampally,\n Hyderabad - 500032.");
             printf("\nVisit the Help Desk at any Branch or drop us a line at \n \nOur Branch / ATM / Bank@Home DropBox / ATM Sharing");
             printf("\n \n \t\t \t***** Thanks for Joining, Please come back !! ***** \n\n");
             break;

             default:
             printf("Invalid Option !!"); //will start again all program by loop infuture



         }


     }
     else{
         printf("Sorry Invalid Pin !!");
     }






    printf("\n \n \t\t \t \t Copyright@ 2020 . All rights Reserved. \n\n");

}