# Day 1

## Number of Problems Solved: 5

### Problem 1

#### [Roller Coster](https://www.codechef.com/START37D/problems/MINHEIGHT)

#### Solution:

```
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
	      if(sc.nextInt()>=sc.nextInt()) {
	    	  ou.write("YES" +"\n");
	      }else {
	    	  ou.write("NO" +"\n");
	      }

		}
		ou.flush();
	}
}
```

### Problem 2

#### [The Mango Truck](https://www.codechef.com/START37D/problems/MANGOES)

#### Solution:

```
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
	      int x=sc.nextInt();
	      int y=sc.nextInt();
	      int z=sc.nextInt();
	      ou.write((z-y)/x +"\n");

		}
		ou.flush();
	}
}

```

### Problem 3

#### [Laptop Recommendation](https://www.codechef.com/START37D/problems/LAPTOPREC)

#### Solution:

```
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

```

### Problem 4

#### [Infernos](https://www.codechef.com/START37D/problems/INFERNO)

#### Solution:

```
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

```

### Problem 5

#### [Beat the Average](https://www.codechef.com/START37D/problems/ABOVEAVG)

#### Solution:

```
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
	        int m = sc.nextInt();
	        int x = sc.nextInt();
	        int tm = n*x;
	        if(m==x) {
	        	ou.write(0 +"\n");
	        }else {
	        	ou.write((tm)/(x+1) +"\n");
	        }

		}
		ou.flush();
	}
}

```
