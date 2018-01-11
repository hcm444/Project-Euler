import java.util.Scanner;
public class LargePrime {
	static Scanner ss = new Scanner(System.in);
	public static void main(String[] args) {
		long input = ss.nextLong();
		for (long i = 2; i < input; i++) { //long because int will divide by zero
			if (Factor(input, i) && Prime(input / i))
				System.out.println(input / i);
				//Output for 600851475143:
				//6857
				//1471
				//839
				//71
		}
	}
	public static boolean Factor(long x, long y) {
		if (x % y == 0)
			return true;
		return false;
	}
	public static boolean Prime(long x) {
		for (int i = 2; Math.pow(i, 2) < x; i++) {
			if (x % i == 0)
				return false;
		}
		return true;
	}
}
