/*
	The prime factors of 13195 are 5, 7, 13 and 29.

	What is the largest prime factor of the number 600851475143 ?
*/

var target = 600851475143;
var max = 0;
for(var i = 2; i < parseInt(Math.sqrt(target)); i++)
	if (target%i === 0 && isPrime(i) && i > max)
		max = i;
console.log(max);

function isPrime(num){
	if (num === 2)
		return true;
	if (num%2 === 0)
		return false;
	for (var i = 3; i < num; i += 2)
		if (num%i === 0)
			return false;
	return true;
}
