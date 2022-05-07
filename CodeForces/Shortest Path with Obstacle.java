import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.util.Scanner;
import java.io.*;
import java.util.*;
import java.util.StringTokenizer;

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
			sc.nextLine();
			int Ax, Ay, Bx, By, Fx, Fy;
			Ax = sc.nextInt();
			Ay = sc.nextInt();
			Bx = sc.nextInt();
			By = sc.nextInt();
			Fx = sc.nextInt();
			Fy = sc.nextInt();
			int d = Math.abs(Ax - Bx) + Math.abs(Ay - By);
			if (((Ax == Fx && Bx == Fx) && ((Ay - Fy) * (By - Fy) < 0)
					|| (Ay == Fy && By == Fy) && ((Ax - Fx) * (Bx - Fx) < 0))) {
				ou.write(d + 2 + "\n");
			} else {
				ou.write(d + "\n");
			}
		}
		ou.flush();
	}
}
