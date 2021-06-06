/*Q24. Suppose an image can be represented as a 2D array of 0s and 1s. Write a function to reverse an image.
       Replace the 0s with 1s and vice versa.*/

#include<stdio.h>

int matrix[100][100],i,j,rows,cols;

void reverseImage(int matrix[i][j]);

void main(){
	printf("Enter rows and coumns of matrix:");
	scanf("%d %d",&rows,&cols);
	printf("Enter %d elements into array:",rows*cols);
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	reverseImage(matrix);
}

void reverseImage(int matrix[i][j]){
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(matrix[i][j]==0)
			  matrix[i][j]=1;
			else if(matrix[i][j]==1)
			  matrix[i][j]=0;
		}
	}
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
	    printf("%d, ",matrix[i][j]);
		}
		printf("\n");
	}
}
