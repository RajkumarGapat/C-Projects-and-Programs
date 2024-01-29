//Program to Count the Number of Digits
#include <stdio.h>
int main() {
    int n;  
  int count = 0; 
  printf("Enter an integer: ");
  scanf("%d", &n); //5678
 
  // iterate at least once, then until n becomes 0
  // remove last digit from n in each iteration
  // increase count by 1 in each iteration
  do {
        n=n/10;
        //printf("Now n = %d\n",n);
        count++;
  } while (n != 0);

  printf("Number of digits: %d", count);
}

/*
Steps:
1. n=5678
2. n=5678/10 -> n=567
3. count++; means count=count+1 -> count=0+1 , count =1
4. 567 != 0 ->true
5. n=567/10 -> n=56
6. count=1+1, count=2
7. 56 != 0 ->true
8. n=56/10 -> n=5
9. count=2+1-> count=3
10 5 != 0 ->true
11 n=5/10 ->0 
12 count=3+1 , count =4
13. 0 !=0 -> false
*/