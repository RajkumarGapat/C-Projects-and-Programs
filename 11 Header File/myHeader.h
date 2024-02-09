int num1,num2;
int add(int a,int b)
{
int sum=a+b;
return sum;
}
void input()
{
  printf("Enter Your First Number ");
  scanf("%d",&num1);
  printf("Enter Your Second Number ");
  scanf("%d",&num2);
}
void checkLeap(int year)
{
  int rem=year%4;
  if(rem==0)
  {
    printf("%d is Leap Year \n",year);
  }
  else
  {
    printf("%d is not Leap Year \n",year);
  }

}

void rect()
{
   int area=num1*num2;
  printf("Area of Recatnagle = %d\n",area);
}
