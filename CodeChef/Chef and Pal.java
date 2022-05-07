import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.util.Scanner;
import java.io.*;
import java.util.*;
import java.util.StringTokenizer;
//import java.text.DecimalFormat;
//import java.math.BigDecimal;
//import java.math.RoundingMode;


public class Main {
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
			try {
				str = br.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		}
	}
	


	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		FastReader sc = new FastReader();
		BufferedWriter ou = new BufferedWriter(new OutputStreamWriter(System.out));
		// Start coding
	    int t = sc.nextInt();
		for (int o = 0; o < t; o++) {
			int n = sc.nextInt();
			String s = "1";
			if (n%2==0) {
				for (int i = 1; i<n ; i++) {
					if (i%2==0) {
						s= s+"1";
					}else {
						s = s + "0";
					}
				}
			} else {
				s = "-1";
			}
			ou.write(s +"\n");
		}
		ou.flush();
	  }
}
