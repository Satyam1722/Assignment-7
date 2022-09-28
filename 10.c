#include<stdio.h>
int main()
{
    int n,m,d,temp;
    
    for(n=1;n<=1000;n++){

    temp=n;
    m=0;
    while(temp){
        d=temp%10;
        m+=d*d*d;
        temp/=10;

    }

    if(m==n)
    printf("%d ",n);

    }

    return 0 ;
    
    
}