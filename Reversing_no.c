#include<stdio.h>
int main()
{
int a,reverse=0;
printf("enter the number");
scanf("%d\n",&a);
while(a>0)
{
  reverse= reverse*10+(a%10);
  a=a/10;
}
printf("reversed number is %d\n",reverse);
}
