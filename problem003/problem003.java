/*
	The prime factors of 13195 are 5, 7, 13 and 29.

	What is the largest prime factor of the number 600851475143 ?
*/

import java.lang.Math;

public class problem003
{
	public static void main(String[] args)
	{
		long target = 600851475143L;
		int max = 0;
		for (int i = 2; i < (int)Math.sqrt(target); i++)
			if (target%i == 0 && isPrime(i) && i > max)
				max = i;
		System.out.println(max);
	}

	static boolean isPrime(int num)
	{
		if (num == 2)
			return true;
		if (num%2 == 0)
			return false;
		for (int i = 3; i < num; i += 2)
			if (num%i == 0)
				return false;
		return true;
	}
}
