import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;

public class Main {
    
    public static void main(String[] args) throws IOException {
        
        Locale.setDefault(Locale.US);
        
        Scanner sc = new Scanner(System.in);
        
        double n = 3.14159;
        double raio;
        double area;
        
        raio = sc.nextDouble(); 
        
        area = n * raio * raio; 
        
        System.out.printf("A=%.4f\n", area);
        
        sc.close();
        
    }
    
}