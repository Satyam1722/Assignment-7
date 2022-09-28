#include<stdio.h>
int main()
{
    int n,m,d,temp;
    printf("enter a number\n");
    scanf("%d",&n);

    temp=n;
    m=0;
    while(temp){
        d=temp%10;
        m+=d*d*d;
        temp/=10;

    }

    if(m==n)
    printf("Armstrong Number \n");
    else
    printf("Non Armstrong Number \n");

    return 0 ;
    
    
}