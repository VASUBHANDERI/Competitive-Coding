# Day 2

## Number of Problems Solved: 1

### Problem #1 Food for Animals

#### [Problem Statement](https://codeforces.com/contest/1675/problem/A)

#### Related Topics:

Greedy, Math

#### Code:

java

```

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;
import java.util.*;
import java.io.*;
import java.util.*;
import java.util.StringTokenizer;

import javax.lang.model.element.Element;
import javax.lang.model.util.ElementScanner6;

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
		int tc = sc.nextInt();
		for (int o = 0; o < tc; o++) {
	        int a = sc.nextInt();
	        int b = sc.nextInt();
	        int c = sc.nextInt();
	        int x = sc.nextInt();
	        int y = sc.nextInt();

			int ld = x-a;
			int lc = y-b;

			if(ld<=0 && lc<=0)
			{
				ou.write("YES \n");
			}
			else if (ld>=0 && lc>=0 && (ld + lc)<=c)
			{
				ou.write("YES \n");
			}
			else if (ld>=0 && lc<=0 && ld<=c)
			{
				ou.write("YES \n");
			}
			else if (ld<=0 && lc>=0 && lc<=c)
			{
				ou.write("YES \n");
			}
			else
			{
				ou.write("NO \n");
			}
		}
		ou.flush();
	}
}
```

#### Time Taken: 9 mins
