#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    while(a!=b){
        if(a>b)
        a-=b;
        else
        b-=a;
    }
    if(a==1)
    printf("Co-Prime Number\n");
    else
    printf("Non Co-Prime number\n");
    return 0;
}