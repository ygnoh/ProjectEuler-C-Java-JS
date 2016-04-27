/*
	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

long lcm(long a, long b);

int main(){
	long result, i;
	for(result = 1, i = 2; i <= 20; i++)
		result = lcm(result, i);
	printf("%ld\n", result);
}

long lcm(long a, long b){
	long mult_a_b = a * b;
	while(a != b){
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	return mult_a_b / b;
}
