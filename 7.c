#include<stdio.h>
int main()
{
  int i,n,a,b,flag=0;
  printf("enter both number\n");
  scanf("%d%d",&a,&b);
  for(n=a;n<=b;n++){
    flag=0;
  for(i=2;i<=n/2;i++){
    if(n%i==0){
        flag=1;
        break;
    }
  }
  if(!flag)
  printf("%d ",n);
  }

  return 0;
  
  }