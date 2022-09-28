#include<stdio.h>
int main()
{
  int i,n,a,flag=0;
  printf("enter the number\n");
  scanf("%d",&a);

  for(n=a+1;n<=a*a;n++){
    flag=0;

   for(i=2;i<=n/2;i++){
    if(n%i==0){
        flag=1;
        break;
     }
   }

  if(!flag){
  printf("%d ",n);
  break;
   }
  }

  return 0;
  
  }