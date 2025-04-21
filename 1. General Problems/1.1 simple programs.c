/* Example 1.1 Tabulating cos(x) */

// Include Header Files
#include <stdio.h>
#include <math.h>

// Define the main function
int main() {
  // Declare Variables 
  float x,x1,x2,dx,y;
  float pi;
  int i, n;
  FILE*fptr;
  pi=4.0*atan(1.0);
  printf("Enter x1,x2 in units of pi \n");
  scanf("%f,%f",&x1,&x2);
  printf("%6.2f %6.2f \n",x1,x2);
  printf("Enter the value of n \n");
  scanf("%d",&n);
  printf("n=%d \n",n);
  x1=x1*pi;
  x2=x2*pi;
  printf("x1=%6.2f,x2=%6.2f \n",x1,x2);
  dx = (x2-x1)/(float)(n);
  fptr = fopen("data1.dat","w");
  for(i=0;i<=n;i++){
    x = x1+i*dx;
    y = cos(x);
    printf("%6.2f,%6.2f \n",x,y);
    fprintf(fptr,"&f &f", x,y);
  }
  fclose(fptr);
  return 0;
}


/* Example 1.2 Factorial Function */

#include<stdio.h>

// Declaring the factorial function
int factorial(int n) {
  int i,z = 1;
  for (int i = 1; i <= n; i++) {
    z*= i;
  }
  return z;
}
int main() {
  // Declare Variables
  int n;
  printf("Enter a positive integer: \n");
  scanf("%d", &n);
  printf("Factorial of %d is %d\n", n, factorial(n));
  return 0;
}
