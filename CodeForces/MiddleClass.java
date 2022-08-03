import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.util.*;
import java.io.*;
import java.util.*;
import java.util.StringTokenizer;

public class MiddleClass {

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
            int n = sc.nextInt();
            int x = sc.nextInt();
            int a[] = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            boolean nf = true;
            for (int i = n - 1; i >= 0; i--) {

                int sum = 0;
                for (int j = 0; j <= i; j++) {
                    sum = sum + a[j];
                }
                double avg = (double) (sum / (i + 1));
                if (avg >= (x / 1.0)) {
                    ou.write(i + 1 + "\n");
                    nf = false;
                    break;
                }
            }
            if (nf) {
                ou.write(0 + "\n");
            }
        }

        ou.flush();
    }
}