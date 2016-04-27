public class problem2{
	public static void main(String[] args){
		int n1 = 1, n2 = 1, result = -1;
		int sum = 0;
		do{
			if(result%2 == 0)
				sum += result;
			result = n1 + n2;
			n1 = n2;
			n2 = result;
		}while(result < 4000000);
		System.out.printf("%d\n", sum);
	}
}
