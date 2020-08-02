#include <stdio.h>
#define N 9


main()
{
	int a[]={9,3,6,2,7,4,1,8,0};
	int i,j,temp;
	for (int i = 0; i < N; i++)
	{
	  for (int j = i+1; j <= N; j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("hello\n");
	for (int x = 0; x < N; ++x)
	{
		printf("%d ", a[x]);

	}
	printf("\n");
	
}