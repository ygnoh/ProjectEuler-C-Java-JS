/*
	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
	Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <math.h>
#define LIMIT 2000000

int is_prime(int num);

int main(){
	long sum;
	int i;
	for(sum = 0, i = 1; i < LIMIT; i++)
		if(is_prime(i)) sum += i;
	printf("%ld\n", sum);
}

int is_prime(int num){
	int d;
	if(num < 2) return 0;
	if(num == 2) return 1;
	if(num%2 == 0) return 0;
	for(d = 3; d <= (int)sqrt(num); d += 2)
		if(num % d == 0) return 0;
	return 1;
}
