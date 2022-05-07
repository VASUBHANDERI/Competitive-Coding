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
	static boolean both(double number)    
	{   
	//calculating the square root of the given number  
	double sqrt=Math.sqrt(number); 
	double cbrt=Math.cbrt(number);
	//finds the floor value of the square root and comparing it with zero  
	return ((sqrt - Math.floor(sqrt)) == 0 && (cbrt - Math.floor(cbrt)) == 0);   
	}  
	static boolean pSqr(double number)    
	{   
	//calculating the square root of the given number  
	double sqrt=Math.sqrt(number); 
	
	//finds the floor value of the square root and comparing it with zero  
	return ((sqrt - Math.floor(sqrt)) == 0 );   
	}  
	static boolean pCube(double number)    
	{   
	//calculating the square root of the given number   
	double cbrt=Math.cbrt(number);
	//finds the floor value of the square root and comparing it with zero  
	return ((cbrt - Math.floor(cbrt)) == 0);   
	}  
	
	
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		FastReader sc = new FastReader();
		BufferedWriter ou = new BufferedWriter(new OutputStreamWriter(System.out));
		// Start coding
		int t = sc.nextInt();
		for (int o = 0; o < t; o++) {
			ou.write(sc.nextInt() + sc.nextInt() +"\n");
		}
		ou.flush();
    }
}
