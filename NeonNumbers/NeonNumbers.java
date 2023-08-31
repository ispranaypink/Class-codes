import java.util.Scanner;
public class NeonNumbers{
    public static void main(String[]args){
        Scanner scanner = new Scanner (System.in);
        int n = scanner.nextInt();
        int square = n*n;
        int SumOfNumbers = 0;

        while (square > 0){
            SumOfNumbers += square%10;
            square /= 10;
        }
        if (SumOfNumbers == n){
            System.out.println("THIS IS A NEON NUMBER");
        }
        else{
            System.out.println("THIS IS NOT A NEON NUMBER");
        }
        scanner.close();
    }
}