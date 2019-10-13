import java.util.Scanner;
import java.util.stream.IntStream;
public class LargePrime {
 private static Scanner ss = new Scanner(System.in);
 public static void main(String[] args) {
  long input = ss.nextLong();
  long i = 2;
  while (i < input) { //long because int will divide by zero
   if (Factor(input, i) && Prime(input / i)) {
    System.out.println(input / i);
   }
   //Output for 600851475143:
   //6857
   //1471
   //839
   //71
   i++;
  }
 }
 private static boolean Factor(long x, long y) {
  return x % y == 0;
 }
 private static boolean Prime(long x) {
  return IntStream.iterate(2, i -> Math.pow(i, 2) < x, i -> i + 1).noneMatch(i -> x % i == 0);
 }
}
