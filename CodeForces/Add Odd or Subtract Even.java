import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
public class Sollution{
     static class FastReader {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(
                new InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt() { return Integer.parseInt(next()); }
 
        long nextLong() { return Long.parseLong(next()); }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try {
                str = br.readLine();
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
     public static void main(String args[])throws Exception{
        FastReader sc = new FastReader();
          int t = sc.nextInt();
          for(int o=0;o<t;o++){
          int a =sc.nextInt();
          int b =sc.nextInt();
               if(a>b){
                    if((a-b)%2!=0){
                         System.out.println(2);
                    }else if((a-b)%2==0){
                          System.out.println(1);
                    }
               }else if(a<b){
                    if((b-a)%2!=0){
                          System.out.println(1);
                    }else if((b-a)%2==0){
                               System.out.println(2);
                    }
               }else{
                    System.out.println(0);
               }
     }
}
}
