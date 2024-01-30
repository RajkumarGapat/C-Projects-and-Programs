#include<stdio.h>
void main()
{
    int i=1,j;
    do{

        //nested loop or inner loop or child loop will start from here
         j=1;
         do
         {
             printf("@ ");
             j++;
         } while (j<5);
         
        //nested loop or inner loop or child loop will end from here
        printf("\n");

        i++;
    }while(i<3);
}

/* Processing Steps:-
1. i=1
2. j=1
3. print @
4. j++; means j=1+1; means j=2
5. check j means 2<5 ->true
6. print @
7. j++; means j=2+1; j=3
8. check j 3<5 ->true
9. print @
10. j++; means j=3+1; j=4
11 check j means 4<5 ->true
12. print @
13. j++; means j=4+1; means j=5
14. check j 5<5->false means nested loop stop
15. print \n means give new line blinking
16. i++; means i=1+1; means i=2;
17. check i means 2<3->true
18. j=1
19. print @
20. j++; means j=1+1; means j=2
21. check j means 2<5 ->true
22. print @
23. j++; means j=2+1; j=3
24. check j 3<5 ->true
25. print @
26. j++; means j=3+1; j=4
27 check j means 4<5 ->true
28. print @
29. j++; means j=4+1; means j=5
30. check j 5<5->false means nested loop stop
31. print \n means give new line blinking
32. i++; means i=2+1; means i=3;
33. check i means 3<3->false means parent loop stop

output:-
@ @ @ @
@ @ @ @
*/