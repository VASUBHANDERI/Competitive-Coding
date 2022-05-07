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
	    String s = sc.next()+sc.next();
	    String rb = "RB";
	    String br = "BR";
	    String rg = "RG";
	    String gr = "GR";
	    String gb = "GB";
	    String bg = "BG";
	    String bb = "BB";
	    String rr = "RR";
	    String gg = "GG";
	   if(s.equals(rb)||s.equals(br)||s.equals(rr)) {
		   ou.write("R" +"\n");
	   } else if (s.equals(rg) ||s.equals(gr) ) {
		   ou.write("R" +"\n");
	   } else if (s.equals(bg) || s.equals(gb)|| s.equals(bb)) {
		   ou.write("B" +"\n");
	   } else if (s.equals(gg)) {
		   ou.write("G" +"\n");
	   }
	    ou.flush();
	  }
}
