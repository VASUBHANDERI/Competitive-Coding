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
	        int n = sc.nextInt();
	        int x = sc.nextInt();
	        int a[]=new int[n];
	        int max=1;
	        for(int i=0;i<n;i++) {
	        	a[i]=sc.nextInt();
	        	if(a[i]>max)
	        		max=a[i];
	        }
	        int c=0;
        	for(int i=0;i<n;i++) {
        		if(a[i]%x==0) {
        			c=c+(a[i]/x);
        		}else {
        			c=c+(a[i]/x)+1;
        		}
        	}
	        if(max>c) {
	        	
	        	ou.write(c +"\n");
	        }else {
	        	ou.write(max +"\n");;
	        }
		}
		ou.flush();
	}
}

