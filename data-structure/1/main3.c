#include <stdio.h>

main(){
 int max =0;
 int i;
 int x;
 for(i=1;i<=6;i++){
  scanf("%d",&x);
  if(x>max)
  	max=x;
}
printf("max=%d\n",max);
}

