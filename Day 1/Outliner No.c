#include<stdio.h>
#include<stdlib.h>

int* getArray();
void OutlinerNo(int *);

int *arr,n,i,sum=0;

void main(){
	
	getArray();
    OutlinerNo(arr);
	
	free(arr);
}

int* getArray(){
   printf("Enter size of array:");
   scanf("%d",&n);
   arr=(int*)malloc(n*sizeof(int*));
   printf("Enter %d elements into array:",n);
   for(i=0;i<n;i++){
   	scanf("%d",(arr+i));
   }
   return arr;
}

void OutlinerNo(int *arr){
     if(*arr%2==0){
     	for(i=0;i<n;i++){
     		if(*(arr+i)%2!=0){
     			printf("Outliner No=%d",*(arr+i));
			 }
		 }
	 }
	 else{
	 	for(i=0;i<n;i++){
     		if(*(arr+i)%2==0){
     			printf("Outliner No=%d",*(arr+i));
			 }
		 }
	 }
}
