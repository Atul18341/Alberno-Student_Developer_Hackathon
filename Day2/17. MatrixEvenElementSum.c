//Q17. Write a program that returns the sum of all even elements in a 2D matrix.

#include<stdio.h>
#include<stdlib.h>

int matrix[100][100],i,j,rows,cols,sum=0;
int setMatrix();
void EvenSum(int);
void main(){
	setMatrix();
	EvenSum(sum);
}
int setMatrix(){
	printf("Enter no of rows and columns:");
	scanf("%d%d",&rows,&cols);
	printf("Enter %d elements into the matrix:",rows*cols);
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j] % 2==0){
				sum+=matrix[i][j];
			}
		}
	}
	return sum;
}

void EvenSum(int sum){
	printf("Sum=%d",sum);
}
