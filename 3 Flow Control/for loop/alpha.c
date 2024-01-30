#include<stdio.h>
void main()
{
    char alph='A';
    //char al='Z';
    //printf("%d\n",al);
    int i,j;
    
    for(i=1;i<6;i++)
    {  
        for(j=1;j<=i;j++)
        {
           //printf("%d%c ",alph,alph);
           printf("%c ",alph);
            
        }
        if(alph==65)
        {
          alph=90;
        }
        else{
            alph--;
        }
        
        printf("\n");
    }
}
