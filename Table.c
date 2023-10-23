#include<stdio.h>
void main()
{
int n;
printf("enter a number :-");
scanf("%d",&n);

for(int i=n;i<=10*n;i=i+n)
{
printf("%d\n",i);
}
}
