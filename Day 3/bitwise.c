#include <stdio.h>
int main()
{  
	short int a = 12, b = 5;  
	
	short int c = a & b;		// bitwise AND    && logical and
	
	short int d = a | b;		// bitwise OR     || logical or
	
	short int e = a ^ b;		// biwise XOR     
	
	short int  f = ~a;			// biwise NOT   
	
	short int g = b << 2;		// left shift
	
	short int h = b >> 1;		// right shift   
	
	printf("c=%d  d=%d  e=%d  f=%X  g=%d  h=%d", c, d, e, f, g, h); 
	return 0;

}  

