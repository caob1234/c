#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int max,min;
}Data;

int MIN;

int fun1(int a[],int n){
	int i,max;
	max=MIN=a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
		if (a[i]<MIN)
		{
			MIN=a[i];
		}
	}
	return(max);
}

int * fun2(int a[],int n){
	static int b[2];
	b[0]=b[1]=a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>b[0])
		{
			b[0]=a[i];
		}
		if (a[i]<b[1])
		{
			b[1]=a[i];
		}
	}
	return(b);
}

Data * fun3(int a[],int n){
	Data *p;	
	p=(Data * )malloc(sizeof(Data *)); //指针初始化
	p ->max=p->min=a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>p->max)
		{
			p->max=a[i];
		}
		if (a[i]<p->min)
		{
			p->min=a[i];
		}
	}
	return(p);
}

Data fun4(int a[],int n){
	/*将最大、最小值放到结构体p中，通过结构体p带回返回值*/
	Data p;
	p.max=p.min=a[0];   //给最大、最小值赋初值
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>p.max)
		{
			p.max=a[i];
		}
		if (a[i]<p.min)
		{
			p.min=a[i];
		}
	}
	return(p);
}

void fun5(int a[],int n,int * p,int * q){
	/*用指针带回返回值，指针p指向最大值，指针q指向最小值*/
	*p=*q=a[0];
	for (int i = 0; i < n; ++i)
	{
		if (*p<a[i])
		{
			*p=a[i];
		}
		if (*q>a[i])
		{
			*q=a[i];
		}
	}
}

void main()
{
	int a[10]={1,3,9,8,4,2,5,0,7,6},max,*p;
	Data *q;
	Data z;
	int *x,*y;
	x=(int *)malloc(sizeof(int *));
	y=(int *)malloc(sizeof(int *));



	max=fun1(a,10);
	printf("max=%d min=%d\n",max,MIN);


	p=fun2(a,10);
	printf("max=%d min=%d\n",p[0],p[1]);

	q=fun3(a,10);
	printf("max=%d min=%d\n",q->max,q->min);

	z=fun4(a,10);
	printf("max=%d min=%d\n",z.max,z.min);

	fun5(a,10,x,y);
	printf("max=%d min=%d\n",*x,*y);
}