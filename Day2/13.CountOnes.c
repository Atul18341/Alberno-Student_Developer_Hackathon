#include<stdio.h>


int arr[100][100],i,j,rows,cols;
void countOnes(int arr[rows][cols]);
void main(){
	printf("Enter rows and columns of 2D array:");
	scanf("%d%d",&rows,&cols);
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	countOnes(arr);
}

void countOnes(int arr[rows][cols]){
	int count=0;
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(arr[i][j]==1){
				count++;
			}
		}
	}
	printf("No. of 1s= %d",count);
}
