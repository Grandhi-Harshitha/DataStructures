#include<stdio.h>
int factorial(int);
int main()
{
int a,res;
printf("enter the number");
scanf("%d",&a);
res=factorial(a);
printf("factorial is %d",res);
return 0;
}
int factorial(int b)
{
if(b==0||b==1)
return 1;
else
return b*factorial(b-1);
}

