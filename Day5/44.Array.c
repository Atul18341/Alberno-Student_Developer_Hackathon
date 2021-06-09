#include<stdio.h>
#include<stdlib.h>

void elementUpdater(int*);

int *p,n,i;
void main(){
	printf("Enter size of array:");
	scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int*));
    if(p!=NULL){
    	for(i=0;i<n;i++){
    	scanf("%d",(p+i));
      }
	}

	elementUpdater(p);
	free(p);
}

void elementUpdater(int *p){
    int prev=*p;
  *p=*p+*(p+i);
for(i=1;i<n;i++){
    int curr=*(p+i);
    *(p+i)=*p*(*(p+i+1));
    prev=curr;
	}
	*(p+n-1)=prev*(*(p+n-1));

	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
}
