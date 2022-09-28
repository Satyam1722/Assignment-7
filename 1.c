#include<stdio.h>
int main()
{
    int i,a=0,b=1,f,n;
    f=a+b;
    printf("enter the number of term \n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        f=a+b;
        a=b;
        b=f;
    }
    printf("%d term of fibonacci series is %d \n",n,f);
    return 0;

    

}