import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.util.*;
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
             int a=sc.nextInt();
             int b=sc.nextInt();
             int c=sc.nextInt();
             int x=sc.nextInt();
             int y=sc.nextInt();
             boolean p=false;
             if(x>a && y>b) {
            	 x=x-a;
            	 y=y-b;
            	 if((x+y)<=c) {
            		 p=true;
            	 }
             }
             else if(x>a && y<=b) {
            	 x=x-a;
            	 if(x<=c) {
            		 p=true;
            	 }
             }
             else if(x<=a && y>b) {
            	 y=y-b;
            	 if(y<=c) {
            		 p=true;
            	 }
             }
             else if(x<=a && y<=b) {
            	 p=true;
             }
             
             
             if(p) {
            	 ou.write("YES" +"\n");
             }else {
            	 ou.write("NO" +"\n");
             }
	        
	        	
		}
		ou.flush();
	}
}

