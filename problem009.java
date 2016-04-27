/*
	A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
	a^2 + b^2 = c^2
	For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
	Find the product abc.
*/

public class problem9{
	/*
		Since c = 1000 - (a + b), we can get,
		a^2 + b^2 = (1000 - (a + b))^2 or a(1000 - b) = 1000(500 - b) or b(1000 - a) = 1000(500 - a)
	*/
	public static void main(String[] args){
		int a, b;
		for(a = 1; a < 500; a++)
			for(b = 1; b < 500; b++)
				if( a * (1000 - b) == 1000 * (500 - b) ){
					System.out.println(a * b * (1000 - (a + b)));
					return;
				}
	}
}
