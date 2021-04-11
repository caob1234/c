#define MAXSIZE 100
typedef struct 
{
	unsigned char elem[MAXSIZE];
	int last;
	
}SeqArray;

// int InitSeqArray(SeqArray seqArray,int count,unsigned char elem){
	
// 	return 1
// }

int main()
{
	SeqArray seqArray;
	int count=8;
	for (int i = 0; i < count; ++i)
	{
		seqArray.elem[i]=(unsigned char)i;
	}
	seqArray.last=count-1;
	for (int i = 0; i < count; ++i)
	{
		printf("seqArray print:%d\n", seqArray.elem[i]);
	}
	return 0;
}