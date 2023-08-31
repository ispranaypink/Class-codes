public class SortingNumbers {
    public static void main(String[] args) {
        int[] numbers = {5, 2, 8, 12, 1, 7};
        int n = numbers.length;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {        //n-i-1 because every loop we have to leave the sorted element element outside the
                if (numbers[j] > numbers[j + 1]) {       // loop, and every loop i iterates by 1. hence increasing with every loop.
                    // Swap numbers[j] and numbers[j+1]  // which will loop leave the element which was sorted in the previous loop outside
                    int temp = numbers[j];               // of the current loop. hence n - i -1.
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        }

        // Print the sorted array
        for (int m = 0; m < n; m++) {
            System.out.print(numbers[m] + " ");
        }
    }
}