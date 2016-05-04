/*
	2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

	What is the sum of the digits of the number 2^1000?
*/
#include <stdio.h>
#define SIZE_OF_BIGINT 310

void mult_bigint(int bigint[SIZE_OF_BIGINT], int k);
int sum_of_digits(int bigint[SIZE_OF_BIGINT]);
int get_size(int bigint[SIZE_OF_BIGINT]);

int main(){
	int bigint[SIZE_OF_BIGINT] = { 0 }; // initialize to 0
	bigint[SIZE_OF_BIGINT-1] = 1;
	for (int i = 1; i <= 1000; i++)
		mult_bigint(bigint, 2);
	printf("%d\n", sum_of_digits(bigint));
}

void mult_bigint(int bigint[SIZE_OF_BIGINT], int k){
	int digit, foo, bar;
	bar = 0;
	digit = SIZE_OF_BIGINT - 1; // start from first digit
	while (digit >= 0){
		foo = bigint[digit] * k;
		bigint[digit] = foo % 10 + bar; // receive value from before digit and add
		bar = foo / 10; // send value to next digit
		digit--;
	}
}

int sum_of_digits(int bigint[SIZE_OF_BIGINT]){
	int sum, i;
	for (sum = 0, i = SIZE_OF_BIGINT - get_size(bigint); i < SIZE_OF_BIGINT; i++)
		sum += bigint[i];
	return sum;
}

int get_size(int bigint[SIZE_OF_BIGINT]){
	int size, i;
	for (size = 0, i = 0; i < SIZE_OF_BIGINT; i++){
		if (bigint[i] != 0)
			break;
		size++;
	}
	return SIZE_OF_BIGINT - size;
}
