#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int i,max=a[0],min=a[0],sum=0;
float avg;
for(i=1;i<5;i++)
{
if(a[i]>max)
{
max=a[i];
}}
printf("maximum number is %5d\n",max);
for(i=1;i<5;i++)
{
if(a[i]<min)
{
min=a[i];
}}
printf("minimum number is %5d\n",min);
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
avg=sum/5;
printf("the avg is %5f",avg);
return 0;
}

