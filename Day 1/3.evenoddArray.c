#include<stdio.h>
#include<stdlib.h>

int getArraySum();
void EvenOrOdd(int);

int *arr,n,i,sum=0;

void main(){
	
	getArraySum();
	EvenorOdd(sum);
}

int getArraySum(){
   printf("Enter size of array:");
   scanf("%d",&n);
   arr=(int)malloc(n*sizeof(int));
   printf("Enter %d elements into array:",n);
   for(i=0;i<n;i++){
   	scanf("%d",(arr+i));
   	sum+=*(arr+i);
   }
   return sum;
}

void EvenorOdd(int sum){
	if(sum%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
