/*Q28. Parity bits are used as a very simple checksum to ensure that binary data isn't corrupted during transit. Here's how they work:

  If a binary string has an odd number of 1's, the parity bit is a 1.
  If a binary string has an even number of 1's, the parity bit is a 0.
  The parity bit is appended to the end of the binary string.
  Write a program that adds the correct parity bit to a binary string.*/


#include<stdio.h>
#include<string.h>

char bit[20],parityBit[1];
int count=0;

int bitDigitcalculator(char []);
char* parityBitCalculateAdd(int);
void UnCorruptedString(char []);

void main(){
	printf("Enter a binary string:");
	scanf("%s",bit);
	bitDigitcalculator(bit);
	parityBitCalculateAdd(count);
	UnCorruptedString(parityBit);
}

int bitDigitcalculator(char bit[]){
	int i;
	for(i=0;i<strlen(bit);i++){
		if(bit[i]=='1')
		  count++;
	}
   return count;
}

char* parityBitCalculateAdd(int count){
	if(count%2==0){
		parityBit[0]='0';
	}
	else{
		parityBit[0]='1';
	}
	return parityBit;
}

void UnCorruptedString(char parityBit[]){
	strcat(bit,parityBit);
	printf("%s",bit);
	
}
