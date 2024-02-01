#include <stdio.h>
int sum(int n); //Function Declaration (in function declaration there is not body of function)

void main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number); // 3

    result = sum(number); //sum(3);

    printf("sum = %d", result);
    
}

int sum(int n) {
    printf("\n n = %d \n",n); //3, 2
    if (n != 0)
    {
        return n + sum(n-1);  // return 3+sum(2) -> return 3+?; 
    }
    else
    {
        return n;
    }
}
/*
Processing of sum function assuming value of n is 3:-
1. print n = 3
2. check 3 != 0 ->true
3. retrun 3 + sum(3-1) means return 3+ sum(2) means return 3+ 0=
Processing of sum function assuming value of n is 5:-
1. print n= 5
2. check 5 != 0 ->true
3. return 5 + sum(5-1) means return 5 + sum(4);
4. print n = 4
5. check 4 != 0 ->true
6. return 4 + sum(4-1) means return 4 +sum(3);
7. print n = 3
8. check 3 != 0 ->true
9. return 3 + sum(3-1) means return 3 + sum(2);
10. print n = 2
11. check 2 != 0 ->true
12. return 2 + sum(2-1) means return 2+ sum(1);
13. print n = 1
14. check 1 != 0 ->true
15. return 1 + sum(1-1) means return 1 +sum(0);
16. print n = 0
17. check 0 != 0 ->false
18. return 0

*/