#include <stdio.h>
#define MAXSIZE 100  // linear list length
#define OK 1
#define ERROR 0

typedef struct{
	int elem[MAXSIZE];  //take up array space
	int last;   //record array last subsript
}SeqList;
//find operate
int Locate(SeqList L,int e){
	int i=0;
	while((i<=L.last)&&(L.elem[i]!=e)){
		i++;
	}
	if (i<=L.last)
	{
		return(i+1);
	}else{
		return(-1);
	}
}
//insert orperate
int InsList(SeqList * L,int i,int e){
	int k;
	if ((i<1)||(i>L->last+2))
	{
		printf("insert location is not current\n");
		return(ERROR);
	}
	if (L->last>=MAXSIZE-1)
	{
		printf("list is full\n");
		return(ERROR);
	}
	for (k=L->last; k >= i-1; k--)
	{
		L->elem[k+1]=L->elem[k];
		L->elem[i-1]=e;
		L->last++;
		return(OK);
	}
}


int main()
{
	SeqList seqList;
	int a[]={4,9,15,28,30,30,42,51,62};
	
	for (int i = 0; i < 9; ++i)
	{
		seqList.elem[i]=a[i];
	}
	seqList.last=9;
	printf("%d\n", Locate(seqList,62));
}
