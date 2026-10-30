#include <stdio.h>
int main()
{
 int n, i;
 unsigned long long fact = 1;
 int a = 0, b = 1, c;
 printf("Enter a non-negative integer (0-20): ");
 scanf("%d", &n);
 if (n < 0 || n > 20)
 {
 printf("Invalid input\n");
 return 0;
 }
 for (i = 1; i <= n; i++)
 fact *= i;
 printf("Factorial = %llu\n", fact);
 printf("Enter Fibonacci terms: ");
 scanf("%d", &n);
 if (n <= 0)
 {
 printf("Invalid number of terms\n");
 return 0;
 }
 printf("Fibonacci series: ");
 for (i = 1; i <= n; i++)
 {
 printf("%d ", a);
 c = a + b;
 a = b;
 b = c;
 }
 printf("\n");
 return 0;
}
