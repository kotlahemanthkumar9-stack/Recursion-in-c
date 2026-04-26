#include<stdio.h>
void even(int a)
{
    if(a==0)
    {
        return;
    }
    int dig=a%10;
    if(dig%2==0)
    {
        printf("%d\n",dig);
    }
    a=a/10;
}
void main()
{
int a;
printf("Enter the value:\n");
scanf("%d",&a);
even(a);
}