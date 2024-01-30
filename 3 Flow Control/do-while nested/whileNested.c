#include<stdio.h>
void main()
{
    /*Syntax of while nested 
    parentVariableintilization
    while(parentcondition)
    {
        
        //code
        Child Variable initilization
        while(childcondition)
        {
            //code
            child variable increment/decrement
        }       

        Parent Variable increment/decrement
    }
    */

    int i,j;

    i=1;
    while(i<3)
    {
        printf(" I am Parent loop i = %d\n",i);
        j=1;
        while(j<4)
        {
             printf("I am Child Loop j = %d \n",j);
            j++;
        }
        i++;
    }   

}

/* Processing Steps:-
1. i=1
2. check i value in condition means 1<3 ->true
3. enter in parent loop body
4. print I am Parent loop i = 1
5. j=1
6. check j value in condition means 1<4 ->true
7. print I am Child Loop j = 1
8. j++; means j=1+1; means j=2
9. check j value in condition means 2<4 ->true
10. print I am Child Loop j = 2
11. j++; means j=2+1; means j=3
12. check j value in condition means 3<4 ->true
13. print I am Child Loop j = 3
14. j++; means j=3+1; means j=4
15. check j value in condition means 4<4 ->false
16. Exit Child Loop
17. i++; means i=i+1; means i=1+1; means i=2;
18. check i value in condition means 2<3 ->true
19. enter in parent loop body
20. j=1
21. check j value in condition means 1<4 ->true
22. print I am Child Loop j = 1
23. j++; means j=1+1; means j=2
24. check j value in condition means 2<4 ->true
25. print I am Child Loop j = 2
26. j++; means j=2+1; means j=3
27. check j value in condition means 3<4 ->true
28. print I am Child Loop j = 3
29. j++; means j=3+1; means j=4
30. check j value in condition means 4<4 ->false
31. Exit Child Loop
32. i++; means i=i+1; means i=2+1; means i=3;
33. check i value in condition means 3<3 ->false
34. Exit Parent Loop Now




*/