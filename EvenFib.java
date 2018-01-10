public class EvenFib {
	public static void main(String[] args) {
		int sum = 0;
		int n0 =1, n1 = 1, n2 = 0;
		System.out.println(n0);
		System.out.println(n1);
		for(int i = 0; i <= 1000; i++) {
				n2 = n1 + n0;
				if (n2 < 4000000) {
					if (n2 % 2 == 0) {
						sum = sum + n2;
						System.out.println(n2);	
					}
				n0 = n1;
				n1 = n2;
			}
		}
		System.out.println(sum);
		}
	}

