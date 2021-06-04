#include<stdio.h>

int* getArray();
int* addOne(int arr[]);
void printArray(int arr[]);
int arr[10],i,n;

void main(){
	getArray();
	
	
}
// 
int* getArray(){
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter %d elements into array:",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	return arr;
}


int* addOne(int arr[]){
	for(i=0;i<n;i++)
		arr[i]+=1;
	return arr;
}

void printArray(int arr[]){
	printf("Array after adding 1 to each array elements:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
