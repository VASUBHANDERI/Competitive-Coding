# Day 3

## Number of problem solved: 5

### Problem 1

#### [Football Cup](https://www.codechef.com/MAY221D/problems/FOOTCUP)

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
            if(x==y && x>0) {
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

#### [Miami GP](https://www.codechef.com/MAY221D/problems/F1RULE)

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
             double q=(x/1.0)*(1.07);
             if((y/1.0)<=q) {
            	 ou.write("YES" +"\n");
             }else {
            	 ou.write("NO" +"\n");
             }



		}
		ou.flush();
	}
}

```

### Problem 3

#### [Sugarcane Juice Business](https://www.codechef.com/MAY221D/problems/SUGARCANE)

#### Sollution:

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
             ou.write(sc.nextInt()*15 +"\n");


		}
		ou.flush();
	}
}

```

### Problem 4

#### [The Attack of Queen](https://www.codechef.com/MAY221D/problems/QUEENATTACK)

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
             int n=sc.nextInt();
             int x=sc.nextInt();
             int y=sc.nextInt();
             int c=(n-1)*2;
             int xr=n-x;
             int yr=n-y;
             x--;
             y--;
             c=c+(Math.min(x,y)+Math.min(x, yr)+Math.min(xr, yr)+Math.min(xr, y));

             ou.write(c +"\n");

		}
		ou.flush();
	}
}

```

### Problem 5

#### [Pushpa](https://www.codechef.com/MAY221D/problems/PUSH7PA)

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

import javax.lang.model.element.Element;

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

   public static int getIndexOfLargest(int[] array) {
      if (array == null || array.length == 0)
         return -1; // null or empty

      int largest = 0;
      for (int i = 1; i < array.length; i++) {
         if (array[i] > array[largest])
            largest = i;
      }
      return largest; // position of the first largest found
   }

   public static void main(String[] args) throws Exception {
      // TODO Auto-generated method stub
      FastReader sc = new FastReader();
      BufferedWriter ou = new BufferedWriter(new OutputStreamWriter(System.out));
      // Start coding
      int tc = sc.nextInt();
      for (int o = 0; o < tc; o++) {
         int n = sc.nextInt();
         int th[] = new int[n];
         for (int i = 0; i < n; i++) {
            th[i] = sc.nextInt();
         }

         Arrays.sort(th);

         if (n == 1) {
            ou.write(th[0] + "\n");
         } else {
            int max = 0;
            int c = 0;
            for (int i = n - 1; i >= 1; i--) {
               if (th[i] == th[i - 1]) {
                  c++;
               } else {
                  if (max < th[i] + c) {
                     max = th[i] + c;
                  }
                  c = 0;
               }
            }
            ou.write(max + "\n");
         }
      }
      ou.flush();
   }
}
```
