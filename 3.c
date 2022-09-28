#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a=0,b=1,f,n;
    printf("enter the number of term \n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        f=a+b;
        a=b;
        b=f;
        if(n==f){
            printf("in the fibonacci series\n");
            exit(0);
        }
    }
    printf("not in the fibonacci series\n");
    return 0;

    

}