#include<stdio.h>
void main()
{
    /*Syntax of while nested 
    parentVariableintilization
    while(parentcondition)
    {
        
        //code
        Child Variable initilization
        while(childcondition)
        {
            //code
            child variable increment/decrement
        }       

        Parent Variable increment/decrement
    }
    */

    int i,j;

    i=1;
    while(i<3)
    {
        
        j=1;
        while(j<10)
        {
             printf("%d - %d \n",i,j);
            j++;
        }
        i++;
    }   

}
