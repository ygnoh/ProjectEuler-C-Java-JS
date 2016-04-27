/*
	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

	Find the largest palindrome made from the product of two 3-digit numbers.
*/

public class problem4{
	public static void main(String[] args){
		int max = 0;
		for(int i = 999; i >= 100; i--)
			for(int j = 999; j >= 100; j--)
				if( isPalindrome(i * j) && (max < i * j) )
					max = i * j;
		System.out.println(max);
	}

	static boolean isPalindrome(int input){
		int reversedNum = 0;
		int num = input;
		while(input > 0){
			reversedNum *= 10;
			reversedNum += input%10;
			input /= 10;
		}
		return num == reversedNum;
	}
}
