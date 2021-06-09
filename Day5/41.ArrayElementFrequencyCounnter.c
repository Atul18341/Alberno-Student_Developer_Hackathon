#include<stdio.h>
#include<stdlib.h>

void FrequencyCounter(int*);

int *array,*count,n,i,j;
void main(){
  printf("Enter size of array:");
  scanf("%d",&n);
  array=(int*)malloc(n*sizeof(int*));
  printf("Enter %d elements into array:",n);
  for(i=0;i<n;i++){
    scanf("%d",(array+i));
  }
  FrequencyCounter(array);
}

void FrequencyCounter(int *array){
int visit=-1;
 count=(int*)malloc(n*sizeof(int*));
 for(i=0; i<n; i++){
        int num=1;
        for(j=i+1;j<n;j++){
            if(*(array+i)== *(array+j)){
                num++;
                *(count+j)= visit;
            }
        }
        if(*(count+j)!=visit))
            *(count+i)=num;
    }
 for(i=0;i<n;i++){
    printf("%d-->%d\n",*(array+i),*(count+i));
 }
}
