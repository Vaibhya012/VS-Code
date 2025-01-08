import java.util.Scanner;

public class table {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // for(int i=n; i<=(n*10); i=i+n){
        //     System.out.print(i+" ");
        for(int i=1; i<=10; i++){
            System.out.print(i*n+" ");
        }
    }
}