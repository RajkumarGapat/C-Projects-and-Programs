#include <stdio.h> 
 #define MIN(a,b) ((a)<(b)?(a):(b))  //Look like function macros or  parameerised macros
 void main() { 
 printf("The minimum value between 50 and 20 is: %d\n", MIN(50,20));   
 printf("The minimum value between 520 and 2000 is: %d\n", MIN(520,2000));   
 }  


/* 
condition?true:false
e.g (a<b)?a:b
*/
