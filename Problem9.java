public class Triplet {
 public static void main(String[] args){
  int a;  //one Pythagorean triplet for which a + b + c = 1000
  int b;
  int c;
  int x = 1000;
  a = 1;
  if (a < x) do {
   b = a;
   if (b < x / 2) do {
    c = x - a - b;
    if (a * a + b * a == c * c) {
     System.out.println("Triplet for which a + b + c = 1000: ");
     System.out.print(a * b * c);
     System.out.println();
     System.out.println("a: " + a);
     System.out.println("b: " + b);
     System.out.println("c: " + c);
    }
    b++;
   } while (b < x / 2);
   a++;
  } while (a < x);
 }
}
