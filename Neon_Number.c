#include<stdio.h>
int main()
{
    int num,i;
   
    scanf("%d",&num);

    int sqr=num*num;
   
    int sum=0,rem;
    while(sqr!=0)
    {
        rem=sqr%10;
        sum+=rem;
        sqr/=10;
    }

   if(sum==num)
    printf("Neon Number");
   else 
   
    printf("Not Neon Number");
}