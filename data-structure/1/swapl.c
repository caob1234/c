#include <stdio.h>
void swapl(int a,int b)
{int c;
c=a;a=b;b=c;
printf("swapl中的a=%d,b=%d",a,b);
}
void swap2(int *a,int *b){
	int c;
	c=*a,*a=*b,*b=c;
}
main()
{
	int x=100,y=800;
	swapl(x,y);
	printf("\n调用swapl后x=%d,y=%d",x,y);
	x=100;y=800;
	swap2(&x,&y);
	printf("\n调用swap2后x=%d,y=%d\n",x,y);
}