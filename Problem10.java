import java.util.Arrays;
import static java.util.stream.IntStream.*;
public class Main {
 public static void main(String[] args) {
  int n = 2000000;
  boolean[] isprime = new boolean[n+1];
  Arrays.fill(isprime, true);
  isprime[2 & 3] = true;
  iterate(4, c -> c < n, i -> i + 2).forEach(i -> isprime[i] = false);
  iterate(3, i -> i < n, i -> i + 2).flatMap(i -> iterate(i + i, j -> j < n, j -> j + i)).forEach(j -> isprime[j] = false);
  long sum = range(2, n).filter(i -> isprime[i]).asLongStream().sum();
  System.out.println(sum);
 }
}
