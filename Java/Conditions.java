import java.util.Scanner;

public class Conditions {

public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();

    if(a>b){
        System.out.println("A is Greater");
    }
    else if(a<b){
        System.out.println("A is Lesser");
    }
    else{
        System.out.println("Equal");
    }

    
}
    
}
