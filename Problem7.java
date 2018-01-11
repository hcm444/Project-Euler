public class Prime {
	public static void main(String[] args) {
		int[] data = new int[10001];
		int a = 3, b = 0, y = 1, x = 2;
		data[0] = x;
		while (data[data.length - 1] == 0) {
			while (b >= 0) {
				if (a % data[b] != 0) {
					if (b == 0) {
						data[y] = a;
						y++;
					}
					b--;
				} else {
					break;
				}
			}
			a += 2;
			b = y - 1;
		}
		System.out.println(data[data.length - 1]);
	}
}
