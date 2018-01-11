public class Multiples {
    public static void main(String[] args) {
    int sum = 0;
        for (int i = 1; i < 1000; i++) {
            if ((i % 3) == 0){
                System.out.println(i + " ");
                sum += i;
            }
            else if ((i % 5) == 0){
                System.out.println(i + " ");
                sum += i;
                }
            }
           System.out.println("Sum of numbers : " + sum);
        }
    }
//https://github.com/hcm444
