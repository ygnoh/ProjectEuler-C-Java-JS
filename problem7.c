/*
	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

	What is the 10001st prime number?
*/

#include <stdio.h>
#include <math.h>

int is_prime(int num);

int main(){
	int count, i;
	for(count = 0, i = 2; ; i++){
		if(is_prime(i)) count++;
		if(count == 10001){
			printf("%d\n", i);
			break;
		}
	}
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
