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
	        int a[]=new int[n];
	        int f[]=new int[n];
	        for(int i=0;i<n;i++) {
	        	a[i]=sc.nextInt();
	        }
	        Arrays.fill(f, 0);
	        for(int i=0;i<n;i++) {
	        	for(int j=0;j<n;j++) {
	        		if(a[i]==a[j]) {
	        			f[i]++;
	        		}
	        	}
	        }
	        
	       int  max=1;
	       int k=0;
	       int count=0;
	       for(int i=0;i<n;i++) {
	    	   if(f[i]>max) {
	    		   max=f[i];
	    		   k=i;
	    	   }
	       }
	       for(int i=0;i<n;i++) {
	    	   if(f[k]==f[i]) {
	    		   count++;
	    		   if(count>f[k]) {
	    			   ou.write("CONFUSED" +"\n");
	    			   break;
	    		   }
	    	   }
	       }
	       if(count==f[k]) {
	    	   ou.write(a[k] +"\n");
	       }
	     
		}
		ou.flush();
	}
}

