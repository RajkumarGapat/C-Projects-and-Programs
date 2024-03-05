//*1.
/*
#include<stdio.h>
int main(void)
{
	int x = 1, y = 2, z = 0;
	//   T
	//  T  2+1=3
//     	2      T
///    1+1    2
	z =++x && y++;
          //                      2   3    1                   
    printf("\n x=%d, y=%d,  z=%d", x, y, z);

	return 0;
}*/
/*

  logical and &&
  T    T     T
  T    F     F
  F    T     F
  F    F     F


*/


// 2.
/*
#include<stdio.h>
int  main(void)
{
	int x = -1, y = 2, z = 0;
  ///  -1+1=0 T 2+1=3
//       T     T
//      -1     2
	z = x++ && y++;
//  1                                0  3  1
	printf("\n x=%d, y=%d,  z=%d\n", x, y, z);
//  return 0;

   x = -1, y = 2, z = 0;
   //  F
   //   F 
   // -1+1=0    not check 2ed part
    z = ++x && y++;              
	// 0                          0     2   0
    printf("\n x=%d, y=%d,  z=%d\n", x, y, z);

	return 0;
}

*/

//3.
/*
#include<stdio.h>
int main(void)
{
	int x = 0, y = 0, z = 0;
//  0+1=1  F	0+1=1
//       F	     F
// 0     0	     0
 	z = x++ || y++;
  //                             1    1  0              
	printf("\n x=%d, y=%d,  z=%d", x, y, z);

	return 0;
}
*/
/*  logical or  ||
     T   T    T     
	 T   F    T
	 F   T    T
	 F   F    F

*/

// 4.
/*
#include<stdio.h>
int main(void)
{
	int x = -1, y = -1, z = 0;
	//        T   -1+1=0
    //     F      T
   //   -1+1=0    -1
	z = ++x   || y++;       
 // 1                                0  0  1
	printf("\n x=%d, y=%d,  z=%d\n", x, y, z);
	//return 0;
    x = -1, y = -1, z = 0;
	 //        F
   //      F     not check
	//   -1+1=0  
    z = ++x   && y++;   
 // 0                               0  -1  0
	printf("\n x=%d, y=%d,  z=%d\n", x, y, z);
	return 0;
}
*/


//5.
/*

#include<stdio.h>
int main(void)
{
	int i, j, k, l;
	i = j = k =1;
	 // 1+1=2 T
//       T      not checked
//       1
	l = i++ || j++ && k++;
	//  ===    ==========
//  left to right                2   1  1  1
	printf("i=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}
*/


//6.
/*
#include<stdio.h>
int main(void)
{
	int i, j, k, l;
	i = j = k = 1;
	//       T
//       T	    T     not check k part
//       2       2
//       1+1   1+1
	l = ++i && ++j || ++k;
//      ==========    ====      2  2  1    1
  printf("i=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}
*/


//7.
/*
#include<stdio.h>
int main()
{
	int i=1, j=1, k=1, l;
	//  1+1=2  T
//       T	
//       1  not checled
	l = i++ || j++ || k++;
//     ===========     =====           
//           T       not checked  2  1  1  1
	printf("i=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}
*/

//8.
/*
#include<stdio.h>
int main(void)
{
	int i, j, k, l;
	i=j=k=1;
	  //    T          not checked
	//   T    T
	//   2      2
	//   1+1     1+1
	l = ++i  && ++j || ++k;
       // ==========              2  2  1  1
	printf("i=%d j=%d k=%d l=%d", i, j, k, l);

	return 0;
}
*/
//9

#include<stdio.h>
int main(void)
{  // compiler depending
	int i=3, j;
	// GCC 
	//  5*5=25 *6=150
//     	 4    5      6
//      3+1	  4+1    5+1
	j = ++i * ++i * ++i;

	printf("i=%d j=%d\n", i,j);
	
	i=3;    // 5*5=25 *6=150*7= 1050
//            4	   5      6     7
//           3+1   4+1  5+1    6+1
 		j = ++i * ++i * ++i * ++i;

	printf("i=%d j=%d\n", i,j);
   return 0;
	i=3;
 // tcc / vs
       // j=6*6*6=216
 //    3+1=4  4+1=5  5+1=6
	j = ++i * ++i * ++i ;

	printf("i=%d j=%d\n", i,j);
	
	return 0;
}


//10.

/*
#include<stdio.h>
int main(void)
{ //                                       
	int i = (3, 4, 5), j = (++i, i++, i++, ++i, ++i);
                      //
	printf("i=%d j=%d\n ", i, j);

           //               
  {     //                    
	int i = (3, 4, 5), j = (++i, i++, i++, ++i, i++);
            //        
	printf("i=%d j=%d\n ", i, j);
    }
	return 0;
}

*/
//11
/*
#include<stdio.h>
int main(void)
{
	int i, j;

	i=3,4,5; 
   
   j=(++i,  ++i, ++i);
  
	printf("i=%d j=%d\n ", i, j);

	return 0;

}

*/
//12
/*
#include<stdio.h>
int main(void)
{
	int i = (3, 4, 5);
	int j =( ++i, i++, i++, ++i, ++i);
   
	printf("\n i=%d j=%d", i, j);

	return 0;
}
*/
