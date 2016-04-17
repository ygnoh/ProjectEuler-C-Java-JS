#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int num);

int main(){
	long target = 600851475143;
	int i;
	int max = 0;
	for(i = 2; i < (int)sqrt(target); i++)
		if(target%i == 0 && is_prime(i))
			if(i > max)
				max = i;
	printf("%d\n", max);
}

bool is_prime(int num){
	int i;
	int count = 0;
	if(num == 2)
		return true;
	if(num%2 == 0)
		return false;
	for(i = 3; i < num; i += 2)
		if(num%i == 0)
			return false;
	return true;
}
