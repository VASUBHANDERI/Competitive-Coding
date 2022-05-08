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

public class ATM {
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
		int x = sc.nextInt();
		double wa = 0;
		if (x % 5 == 0) {
			wa = x / 1.00 + 0.50;
		}
		double print = sc.nextDouble() - wa;
		if (print >= 0) {
			ou.write(String.format("%.2f", print) + "\n");
		} else {
			ou.write(String.format("%.2f", print + wa) + "\n");
		}
		ou.flush();
	}
}
