#include<stdio.h>
int arr[2],i;

void equalityChecker(int []);
void main(){
	printf("Enter two elements into array:");
	scanf("%d%d",&arr[0],&arr[1]);
	
	equalityChecker(arr);
}

void equalityChecker(int arr[]){
	int sum1=0,sum2=0;
	int x1,x2;
	while(arr[0]!=0 && arr[1]!=0){
		x1=arr[0]%10;
		x2=arr[1]%10;
		sum1+=x1;
		sum2+=x2;
		arr[0]=arr[0]/10;
		arr[1]=arr[1]/10;
	}
	printf("Sum1=%d,Sum2=%d",sum1,sum2);
	if(sum1==sum2){
		printf("true");
	}
	else{
		printf("false");
	}
}
