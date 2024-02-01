#include <stdio.h>  
int fact (int);  
int main()  
{  
    int n,f;  
    printf("Enter the number whose factorial you want to calculate?");  
    scanf("%d",&n);   //3
    f = fact(n);  // f = ?
    printf("factorial = %d",f);  
}  
int fact(int n)  // 1
{  
    if(n==1)
    {
        return 1; // this will execute 
    }
    else
    {
        return n*fact(n-1);  // 2 * fact(2-1); means 2 * fact(1); means 2*1 means return 2;
                             // 3 * fact(3-1); means 3 * fact(2); means 3 * 2; means return 6;
    } // 4 * fact(4-1); means 4 * fact(3); means 4 * 6; means return 24;
       // 5 * 24;
       //120
   
}  /*
1. n = 3 -> return 3 * fact(3-1); means 3 * fact(2); means return 3 * 2 means 6
2. n = 2 -> return 2 * fact(2-1); means return 2 * fact(1); means return 2 * 1 means retrun 2
3. n = 1 -> return 1; 

// **********************************************

3 * (fact(2)) * (fact(1));
3 * (fact(2)) * (1);
3 * (fact(2) * 1);
3 * (2 * 1);
3 * 2;
6
//
5 * (fact(4)) * (fact(3)) * (fact(2)) * (fact(1));
5 * (fact(4)) * (fact(3)) * (fact(2)) *  1;
5 * (fact(4)) * (fact(3)) * (2) * 1;
5 * (fact(4)) * (6) * (2 *1);
5 * (fact(4)) * (6 *2);
5 * (fact(4)) * 12;
5 * (24);
120

// 2 * fact(2-1); means 2 * fact(1); means 2*1 means return 2;
// 3 * fact(3-1); means 3 * fact(2); means 3 * 2; means return 6; 
// 4 * fact(4-1); means 4 * fact(3); means 4 * 6; means return 24;
 // 5 * 24;
//120
   


*/

