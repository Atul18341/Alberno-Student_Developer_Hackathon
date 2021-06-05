#include<stdio.h>
#include<stdlib.h>

int* getArray();


int *p,n,i,j;

void main(){
	getArray();
	// To free dynamically allocated memory
	free(p);
}
// Function to get array
int *getArray(){
	printf("Enter size of array:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int*));
	if(p!=NULL){
		printf("Enter %d elements into array:",n);
	    for(i=0;i<n;i++){
	    	scanf("%d",(p+i));
		}
	  return p;	
	}
}
