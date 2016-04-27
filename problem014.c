/*
	The following iterative sequence is defined for the set of positive integers:
	n -> n/2 (n is even)
	n -> 3n + 1 (n is odd)

	Using the rule above and starting with 13, we generate the following sequence:
	13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

	It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
	Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

	Which starting number, under one million, produces the longest chain?

	NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <stdio.h>
#define LIMIT 1000000

int count_chain(long num);

int main(){
	long num, max_num;
	int max_count, chains;
	for(max_count = 0, num = 1; num < LIMIT; num++){
		chains = count_chain(num);
		if(max_count < chains){
			max_count = chains;
			max_num = num;
		}
	}
	printf("%ld\n", max_num);
}

int count_chain(long num){
	int count = 1;
	while(num != 1){
		num = num % 2 ? 3 * num + 1 : num / 2;
		count++;
	}
	return count;
}
