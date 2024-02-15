/*
Simple Interest = (P × R × T)/100  
where P = Principal Amount, R = Rate per Annum, T = Time (years)  
*/

#include<stdio.h>  
/*int main()   
    {   
        float P , R , T , SI ;  
       P =34000; R =30;  T = 5;  
        SI  = (P*R*T)/100;   
        printf("\n\n Simple Interest is : %f", SI);  
        return (0);  
    }
    */  
void main()
{
    printf("\n\n ************************************ \n\n");
   float SI; 
   float t;
   int r=5; 
   int p;
   printf( "please enter the amount ,");
   printf("you will get rate of interest of %d",r);
   printf("for how much time you want to deposit your money = ");
    scanf("%d%f",&p,&t); 
    printf("Tesing :- p= %d and t = %f \n ",p,t);

   SI = (p*r*t)/100;
   printf("You will get %f after %f year ",SI,t);  
}














