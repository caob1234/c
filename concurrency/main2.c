#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <pthread.h>

pthread_cond_t cond_var = PTHREAD_COND_INITIALLZER;
pthread_mutex_t m=PTHREAD_MUTEX_INITALIZER;

int value=100;
bool notified=false;
void* reporter(void* unused){
	/*
	pthread_mutex_lock(&m);
	while(!notified){
		pthread_cond_wait(&cond_var,&m);
	}
	*/
	printf("The value is %d\n", value);
	/*
	pthread_mutex_unlock(&m);
	*/
	return NULL;
}
void* assigner(void* unused){
	value =20;
	/*
	prthread_mutex_lock(&m);
}