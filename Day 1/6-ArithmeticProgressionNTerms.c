#include<stdio.h>
#include<stdlib.h>

void main(){
	int arr[10],a,n,diff,value,i,j;
	printf("Enter first term,no of terms & common difference:");
	scanf("%d%d%d",&a,&n,&diff);
	arr[0]=a;
	for(i=1;i<n;i++){
		value=a+diff;
		arr[i]=value;
		a=value;
	}
	printf("\"");
	for(i=0;i<n;i++){
	printf("%d, ",arr[i]);
	}
     printf("\"");
}
