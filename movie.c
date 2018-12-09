#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

//structure definition
typedef struct movInfo {
	char name[100];
	float score;
	int runTime;
	char madeIn[10];
} movInfo_t;

void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{
	movInfo_t* mvPtr;
	//동적 메모리 할당  
	mvPtr =(movInfo_t*)malloc(sizeof(movInfo_t));
	if (mvPtr==NULL){
		printf("Error\n");
		return NULL;
	}
	//저장  
	strcpy(mvPtr->madeIn, country);			
	strcpy(mvPtr->name,name);
	mvPtr->score=score;
	mvPtr->runTime=runTime; 
	//allocate memory and set the member variables
	
	return (void*)mvPtr;
}

void printMv(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	if (mvPtr == NULL)
	{
		printf("[ERROR] failed to print the movie Info! (object is NULL)\n");
	}
	
	printf("Name : %s (%s)\n", mvPtr->name, mvPtr->madeIn);
	printf("running time : %i, score : %f\n", mvPtr->runTime, mvPtr->score);
	
	return;
}

int mv_printAll(void* obj, void* arg)
{

	printMv(obj);
	arg=NULL;
	return 1;
	//걸러서 찍는다. 
	//영화 정보 구조체를 조건에 맞게.  
}

int mv_printScore(void* obj, void* arg)
{
	/*
	return;*/
	
	
	
}

int mv_printRunTime(void* obj, void* arg)
{
	
}

int mv_printCountry(void* obj, void* arg)
{
	/*if(arg,obj==1){
		printf("lol");
	}
	return;*/
	
	
}




