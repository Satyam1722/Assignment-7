#include<stdio.h>
int main()
{
    int a,b,h;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    while(a!=b){
        if(a>b)
        a-=b;
        else
        b-=a;
    }
    printf("hcf is :: %d\n",a);
    return 0;
}