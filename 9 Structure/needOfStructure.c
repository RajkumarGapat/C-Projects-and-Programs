//In below concept, Please understand "The need of Structre"
#include<stdio.h>
void main()
{
    int a=10; //here int is predefined datatype which has 4 bytes size
    float b=2.5; //here float is predefined datatype which has 4 bytes size
    double c=3.9999; //here double is predefined datatype which has 8 bytes size
    char d;///here char is predefined datatype which has 1 byte size

    //Problem 1:- we cannot change sizes of above predefined datatypes
    //Solutions:- Create Userdefined datatypes 
    int ar[10]; //array or userdefined datatype of 10 integer numbers means size of ar array is 4*10= 40 Bytes
    float arf[5]; // //array or userdefined datatype of 5 float numbers and size is 5*4=20 Bytes
    char name[20]; // //array or userdefined datatype of 20 characters and size is 20*1=20 Bytes

    /* Problem 2:- 
    But there is big problem in above arrays,they are storing only similar types values
    Solution:- two types of userdefined datatypes 1. Function 2. Structure
    1. In Function,you can create multiple values of same or different datatypes
    e.g void all()
    {
        int a; // 4 
        float b; //4
        char ch; // 1
        int ar[20]; // 80
        char name[20]; // 20
    }
    In above function all is userdefined datatype ,and this datatype is created
     4+4+1+80+20=109 Bytes memory on single attempt and no doubt create 109 Bytes for different values

    2. In Structure,you can create multiple values of same or different datatypes 
    or you can create functions also in structure so there is bulk amount of memory can be created
    
    
    */
}