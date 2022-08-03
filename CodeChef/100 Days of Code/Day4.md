# Day 4

## Number of problem solved: 1

### Problem 1

#### [Chef and Gym](https://www.codechef.com/problems/CGYM)

#### Solution:

````
#include <stdio.h>

int main(void) {
 int i,t,X,Y,Z;
 scanf("%d" ,&t);
 for(i=0;i<t;i++)
 {
     scanf("%d" ,&X);
     scanf("%d" ,&Y);
     scanf("%d" ,&Z);
     if(Z>=X+Y)
     {
         printf("2 \n");

     }
     else if(Z>=X)
     {
         printf("1\n");
     }
    else
    {
        printf("0\n");
    }
 }

	return 0;
}```
````
