#include<stdio.h>
int main()
{
    int i,a=0,b=1,f,n;
    printf("enter the number of term \n");
    scanf("%d",&n);
    printf("%d ",b);
    for(i=2;i<=n;i++){
        f=a+b;
        a=b;
        b=f;
        printf("%d ",b);
    }
    return 0;

    

}