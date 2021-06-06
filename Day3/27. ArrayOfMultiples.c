/*Q27. Write a program that takes two numbers as arguments (num, length) and returns an array of multiples of 
       num until the array length reaches length.*/

#include<stdio.h>
#include<stdlib.h>

int* arrayOfMultiples(int,int);
void printArrayOfMultiples(int *);

int *array,num,length,i;

void main(){
	printf("Enter first element and length of array:");
	scanf("%d%d",&num,&length);
	
	arrayOfMultiples(num,length);
	printArrayOfMultiples(array);
}

int* arrayOfMultiples(int num,int length){
	array=(int*)malloc(length*sizeof(int*));
	if(array!=NULL){
		*array=num;
		for(i=1;i<length;i++){
			*(array+i)=num*(i+1);
		}
	}
	return array;
}

void printArrayOfMultiples(int *array){
	printf("[");
	for(i=0;i<length;i++){
	printf("%d",*(array+i));
	if(i<(length-1)){
		printf(", ");
	}
   }
   printf("]");
}
