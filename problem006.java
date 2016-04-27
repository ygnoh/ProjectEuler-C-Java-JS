/*
	The sum of the squares of the first ten natural numbers is,
		1^2 + 2^2 + ... + 10^2 = 385
	The square of the sum of the first ten natural numbers is,
		(1 + 2 + ... + 10)^2 = 552 = 3025
	Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

	Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
public class problem6{
	public static void main(String[] args){
		int n = 100;
		System.out.println(sumToN(n) * sumToN(n) - sumOfSquaresToN(n));
	}

	static int sumOfSquaresToN(int n){
		return n * (n + 1) * (2 * n + 1) / 6;
	}

	static int sumToN(int n){
		return n * (n + 1) / 2;
	}
}
