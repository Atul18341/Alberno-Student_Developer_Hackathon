//Q29. Write a program that squares every digit of a number.

#include<stdio.h>
#include<stdlib.h>
int num,i,j,count,arr[10];

void digitCounter(int);
void main(){
	printf("Enter any number:");
	scanf("%d",&num);
	digitCounter(num);
}

int* digitCounter(int num){
	int x,i=0;
	while(num!=0){
	x=num%10;
	x=x*x;
	arr[i]=x;
	num=num/10;	
	i++;
	}
}

