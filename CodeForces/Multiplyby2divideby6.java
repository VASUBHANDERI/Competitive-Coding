import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.util.*;
import java.io.*;
import java.util.*;
import java.util.StringTokenizer;

public class Multiplyby2divideby6 {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";

            ;
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    public static void main(String[] args) throws Exception {

        FastReader sc = new FastReader();
        BufferedWriter ou = new BufferedWriter(new OutputStreamWriter(System.out));

        int t = sc.nextInt();
        for (int h = 0; h < t; h++) {
            long n = sc.nextLong();
            int c = 0;
            for (int i = 1; i > 0; i++) {
                if (n % 6 == 0) {
                    c++;
                    n = n / 6;
                } else if (n % 3 == 0) {
                    c = c + 2;
                    n = n / 3;
                } else if (n == 1) {
                    ou.write(c + "\n");
                    break;
                } else {
                    ou.write(-1 + "\n");
                    break;
                }
            }
        }
        ou.flush();
    }
}
