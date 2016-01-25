import java.io.*;
import java.util.*;

class Main {
  public static void main(String[] args) throws FileNotFoundException {
  	System.setIn(new FileInputStream("input.in"));
  	System.setOut(new PrintStream(new File("output.out")));
    Scanner in = new Scanner(System.in);
        int T = in.nextInt();        
        for(int t = 0; t < T; ++t){
            int n = in.nextInt();
            int m = in.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; ++i){
                arr[i] = in.nextInt();
            }
            // System.out.printf("%d %d\n", n,m);
            boolean win = false;
            for (int i = 0; i < n - 1; i++) {
                // System.out.println("foring");
                // System.out.println(i);
                // the next element is 1

                if ((i+m < n) && arr[i+m] == 0){
                    // System.out.println("jump");
                    if (i+m >= n-1) {
                        win = true;
                        break;
                    }
                    else {
                        i += m;
                    }
                   
                }

                if (arr[i+1] == 1) {
                    // System.out.println("-> 1");
                    if (arr[i] == 0 && (i+m > n)) {
                        // System.out.println("win");
                        win = true;
                        break;
                    }
                    else {
                        // System.out.println("bby");
                        win = false;
                        break;
                    }
                }

                // the next element is 0
                else {
                    // System.out.println("-> 0");
                    if (i+1+m > n) {
                        win = true;
                        break;
                    }
                    else {
                        continue;
                    }
                }
            }

            if(win){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
  }
}