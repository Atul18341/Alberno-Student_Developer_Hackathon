#include<stdio.h>
int* sortArray(int []);
void fiveMaxSum(int []);

int arr[10],i,j,key,sum=0;

void main(){
	printf("Enter 10 elements:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
     sortArray(arr);
     fiveMaxSum(arr);
}

int* sortArray(int arr[]){
	int temp,key;
	for(i=0;i<10;i++){
		key=i;
		for(j=i+1;j<10;j++){
		 if(arr[j]<key)
		   key=j;	
		}
	temp=arr[i];
	arr[i]=arr[key];
	arr[key]=temp;
	}
	return arr;
}

void fiveMaxSum(int arr[]){
	for(i=9;i>=5;i--){
		sum+=arr[i];
	}
	printf("Maximum possible sum=%d",sum);
}
