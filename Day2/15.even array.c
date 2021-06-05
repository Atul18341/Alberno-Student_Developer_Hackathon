#include<stdio.h>
#include<stdlib.h>
int *p,i,n;

void EvenArray(int *);

void main(){
	printf("Enter size of array:");
	scanf("%d",&n);
	p=(int)malloc(n*sizeof(int));
	printf("Enter %d elements into array:",n);
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	EvenArray(p);
}

void EvenArray(int *p){
	printf("Array containing only even values:\n");
	for(i=0;i<n;i++){
		if(*(p+i)%2==0){
		printf("%d ",*(p+i));
      }
  }
}



