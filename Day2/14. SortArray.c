#include<stdio.h>
#include<stdlib.h>

int* getArray();
int* sortArray(int *);
int* printArray(int *);

int *p,n,i,j;

void main(){
	getArray();
	sortArray(p);
	printArray(p);
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
// Function to sort array
int* sortArray(int *p){
	int key,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(*(p+j)<*(p+i)){
			 temp=*(p+i);
	         *(p+i)=*(p+j);
	         *(p+j)=temp;
		    }
		}
   }
}
// Function to print sorted array
int* printArray(int *p){
		for (i=0;i<n;i++){
		printf("%d",*(p+i));
}
