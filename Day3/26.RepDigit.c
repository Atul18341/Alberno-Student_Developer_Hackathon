/*Q26. A repdigit is a positive number composed out of the same digit. 
Write a program that takes an integer and returns whether it's a repdigit or not.*/

#include<stdio.h>
int repDigitChecker(int);
int num,check=0;
void main(){
	printf("Enter any number:");
	scanf("%d",&num);
	check=repDigitChecker(num);
	if(check==1){
		printf("true");
	}
	else{
		printf("false");
	}
}

int repDigitChecker(int num){
	int x,y;
	while(num!=0){
		x=num%10;
		num=num/10;
		y=num%10;
		num=num/10;
		if(y!=x && x,y>0)
		    break;
		check=1;
	}
   return check;
}

