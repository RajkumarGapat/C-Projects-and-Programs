#include<stdio.h>
void main()
{
    /*
    Syntax
    for(ParentVariableinitilization;Parentcondition;increment/decrementin Parent Variable)
    {
        //
        for(child Variable Initilization,childCondition,increment/decrement in child variable)
        {
            //code
        }

    }
    */

   int i,j;
   for(i=1;i<3;i++)
   {
       //nested for loop will start from here
       for(j=1;j<4;j++)
       {
           printf("* ");
       }
       //nested for loop will end here
       printf("\n");
    
   }
}
/* Processing:-
1. i=1
2. check i means 1<3->true
3. will start execution of nested loop j=1
4. check j means 1<4->true
5. print *
6. j++; means j=1+1; means j=2
7. check j means 2<4->true
8. print *
9. j++; means j=2+1; means j=3
10. check j means 3<4->true
11. print *
12. j++; means j=3+1 means j=4
13. check j means 4<4 ->false
14. end of nested loop here
15. print \n means new line option
16. i++; means i=1+1; means i=2;
17. check i means 2<3->true
18. will start execution of nested loop j=1
19. check j means 1<4->true
20. print *
21. j++; means j=1+1; means j=2
22. check j means 2<4->true
23. print *
24. j++; means j=2+1; means j=3
25. check j means 3<4->true
26. print *
27. j++; means j=3+1 means j=4
28. check j means 4<4 ->false
29. end of nested loop here
30. print \n means new line
31. i++;  means i=2+1; means i=3;
32. check i means 3<3 ->false
33. end of parent loop
*/