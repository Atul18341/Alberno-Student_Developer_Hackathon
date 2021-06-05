/*Q18. Write a program that finds each factor of a given number n. 
Your solution should return an array of the number(s) that meet this criteria.*/

#include<stdio.h>
#include<stdlib.h>

int array[100],i,n,num,count=0;
int* factors(int);
void printFactors(int []);
void main(){
	printf("Enter the number:");
	scanf("%d",&num);
	
	factors(num);
	printFactors(array);
	
}

int* factors(int num){
	for(i=1;i<=num;i++){
		if(num%i==0){
		array[count]=i;
		count++;
	  }
  }
 return array;
}

void printFactors(int array[]){
	printf("[");
	for(i=0;i<count;i++){
		printf("%d",array[i]);
		if(i<count-1){
			printf(" ,");
		}
	}
	printf("]");
}
