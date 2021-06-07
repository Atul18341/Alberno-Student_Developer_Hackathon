#include<stdio.h>

void digitDistance(int,int);
int num1,num2;
void main(){
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	
	digitDistance(num1,num2);
}

void digitDistance(int num1,int num2){
	int sum=0,x1,x2;
	while(num1!=0 && num2!=0){
	x1=num1%10;
	x2=num2%10;
	if(x1-x2>0){
		sum+=x1-x2;
	}
	else{
		sum+=-1*(x1-x2);
	 }
	 num1=num1/10;
	 num2=num2/10;
  }
  printf("Sum=%d",sum);
}
