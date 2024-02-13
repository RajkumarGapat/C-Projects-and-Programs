#include<stdio.h>
void main()
{
  FILE *p; //here p is pointer variable of FILE Datatype here FILE is predefined datatype like int,float,char
  p=fopen("C:\\Users\\Administrator\\Desktop\\Avishkar\\avi.txt","w");
  fclose(p);

  //creating another file in new location
  p=fopen("E:\\Anupma\\UrbanPro\\Online Courses\\C Language\\Chapter 11 File Handling\\Files -Video and Programs\\programs\\demo.txt","w");
  fclose(p);
}
/*
Step 1:- create pointer variable of FILE Datatype
Step2:- intilize pointer variable by calling fopen function
        in fopen function you will give two parameters, first parameter is path of location with filename e.g myfile.txt
        Note:- please give double slashes in path and path will be that location where you want to create your file
       Second parameter will decide what will be use of file means w - writing, r - reading, a - appending

Step3:- call fclose function with passing pointer variable       
*/