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
			int n=sc.nextInt();
			boolean found=false;
			int a[]=new int[n+1];
			int tmp[]=new int[n+1];
			for(int i=1;i<=n;i++) {
				tmp[i]=0;
			}
			for(int i=1;i<=n;i++) {
				a[i]=sc.nextInt();
				tmp[a[i]]++;
			}		
			for (int i=1;i<=n;i++) {
				if(tmp[i]>=3)
				{
					ou.write(i +"\n");
					found=true;
					break;
				}
			}
			if(!found) {
				ou.write("-1" +"\n");
			}
			}
		ou.flush();
	}
}
