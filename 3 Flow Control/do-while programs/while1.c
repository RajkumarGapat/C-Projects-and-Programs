// write a program to display counting from 1 to 10
#include<stdio.h>

void main()
{
	int num=0;	//declaration and initializing of variable num
	while(num<=10)	//while loop with condition
	{
		printf("%d",num);
		num++;		//incrementing operation
	}
	
}

/*     **************************************************
Processing Steps:-
1 num =0    
2 condition 0<10 true  then print 0 
3 Apply num++ means num=0+1; so now num is 1
4. condition 1<10 true  then print 1 
5. apply num++ means num=1+1; so now num is 2
6. condition 2<10 true  then print 2 
7. apply num++ means num=2+1; so now num is 3
8. Repeat setsp 3-4 upto condition result will be false
*/