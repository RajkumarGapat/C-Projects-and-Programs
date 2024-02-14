#include <stdio.h>  
void main(){  
   FILE *fp;  
  
   fp = fopen("C:\\File Handling Programs\\check.txt","w+");  
  
fprintf(fp,"Hello My name is Simar Narang\n");
    
   fseek( fp, 16, SEEK_SET );  
   fprintf(fp,"Anupma Narang ");
 
   fclose(fp);  
}  
