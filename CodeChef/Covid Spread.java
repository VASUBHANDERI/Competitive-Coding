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
			double n = sc.nextDouble();
			double d = sc.nextDouble();
			double p = 1.0;
			if(d>20.0) {
				p=n;
			}else if(d<=20 && d>10){
			       p=1024*(Math.pow(3.0,d-10.0));
			}else {
				p=Math.pow(2.0,d);
			}
		 if(n>p) {
			 ou.write((int)p +"\n");
		 }else {
			 ou.write((int)n +"\n");
		 }
		ou.flush();
		}
		
}
}

