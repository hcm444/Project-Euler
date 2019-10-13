class LargePrime {
 public static void main(String[] args) {
  long SumSquare = 0;
  long SquareSum = 0;
  long sum = 0;
  int x = 1;
  while (x <= 100) {
   SumSquare = SumSquare + x * x;
   sum = sum + x;
   SquareSum = sum * sum;
   x++;
  }
  System.out.print(SquareSum-SumSquare);

 }
}
