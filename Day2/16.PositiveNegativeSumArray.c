/*Q16. Take input, an array of positive and negative numbers. Return an array where the first element is the count of 
positive numbers and the second element is the sum of negative numbers.*/

#include<stdio.h>
#include<stdlib.h>

int* PN_sum(int*);
void printArray(int []);
int *array,count[2],i,n;
void main(){
	printf("Enter size of array:");
	scanf("%d",&n);
	array=(int*)calloc(n,sizeof(int*));
	if(array!=NULL){
		printf("Enter %d elements into array:",n);
		for(i=0;i<n;i++){
			scanf("%d",(array+i));
		}
	}
	PN_sum(array);
    printArray(count);
    
    free(array);
	
}

int* PN_sum(int *array){
	int P_sum=0,N_sum=0;
	for(i=0;i<n;i++){
		if(*(array+i)>0){
		  P_sum+=*(array+i);	
		}
		if(*(array+i)<0){
			N_sum+=*(array+i);
		}
	}
	count[0]=P_sum;
	count[1]=N_sum;
	return count;
}

void printArray(int count[]){
	printf("[%d,%d]",count[0],count[1]);
}
