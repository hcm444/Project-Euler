public class Multiples {
 public static void main(String[] args) {
  int sum = 0, c = 1;
  if (c < 1000) {
   do {
    if ((c % 3) == 0 || (c % 5) == 0) {
     System.out.println(c + " ");
     sum += c;
    }
    c++;
   } while (c < 1000);
  }
  System.out.println("Sum of numbers : " + sum);
 }
}
//https://github.com/hcm444
