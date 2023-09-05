public class MatrixMulti {
    public static void main(String[]args){
        int matri1[][] = {{1,2,3}, {4,5,6}, {7,8,9}};
        int matri2[][] = {{9,8,7}, {6,5,4}, {3,2,1}};
        int newmatri[][] = new int[3][3];
        int sum = 0;

        for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0 ; k < 3 ; k++){                        // k is used as a counter for the sum of multiplication of each element
                    sum = sum + matri1[i][k]*matri2[k][j];           // of 1st row of 1st matric and 1st column of 2nd matrix
                }
                newmatri[i][j] = sum;
                System.out.print(newmatri[i][j] + " ");
                sum = 0;
            }
        }
    }
    
}
