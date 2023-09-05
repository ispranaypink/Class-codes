import java.util.Scanner;
public class PrimeNumbers {
    public static void main(String[]args){
        Scanner scanner = new Scanner (System.in);
        System.out.print("Enter the value of n");
        int n = scanner.nextInt();

        System.out.print("The prime numbers between 1 and" + n + "are");

        for (int num = 2; num<=n;num++){
            Boolean isPrime = true;
            for (int i = 2; i<=Math.sqrt(num);i++){
                if (num%i == 0){
                    isPrime = false;
                }
            }
            if (isPrime){
                System.out.println(num + "");
            }
        }
        scanner.close();
    }
}
