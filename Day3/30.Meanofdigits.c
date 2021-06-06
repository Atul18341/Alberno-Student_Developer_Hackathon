//Q30. Write a program that returns the mean of all digits.

#include<stdio.h>
int meanOfNumber(int);
int num;
void main(){
	int result;
	printf("Enter any number:");
	scanf("%d",&num);
	result=meanOfNumber(num);
	printf("%d",result);
}

int meanOfNumber(int num){
	int sum=0,count=0,mean,n;
	while(num!=0){
	  n=num%10;	
	  sum+=n;
	  num=num/10;
	  count++;
	}
	mean=sum/count;
    return mean;
}
