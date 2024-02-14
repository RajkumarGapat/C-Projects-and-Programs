#include<stdio.h>  

void main(){  
FILE *fp;  
char c;  
 
fp=fopen("C:\\File Handling Programs\\info.txt","r");  
  
while((c=fgetc(fp))!=EOF)
{  
   printf("%c",c);  
}  
  
rewind(fp);//moves the file pointer at beginning of the file  
//fseek( fp, 170, SEEK_SET );  
while((c=fgetc(fp))!=EOF)
{  
printf("%c",c);  
}  
  
fclose(fp);    
  
}    
