import java.util.Scanner;
public class ArmstrongNumber{
    public static void main(String[]args){
        Scanner scanner = new Scanner (System.in);
        System.out.print("Enter the number");
        int n = scanner.nextInt();

        if(isArmstrong){
            System.out.print(n + "is a Armstrong Number");
        }
        else{
            System.out.print(n + "is not a Armstrong Number");
        }
    }
    public static boolean isArmstrong(int n){
        int Originalnum = n;
        int sum = 0;
        while (n > 0){
            int digit = n % 10;
            sum = sum + Math.pow(digit,3);
            n = n / 10;
        }
        return Originalnum ==  sum;
    }
}