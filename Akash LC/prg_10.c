#include <stdio.h>
int main()
{
 int n, a, b, i, j, prime;
 printf("Enter an integer: ");
 scanf("%d", &n);
 prime = (n >= 2);
 for (i = 2; i <= n / i && prime; i++)
 if (n % i == 0)
 prime = 0;
 if (prime)
 printf("%d is prime\n", n);
 else
 printf("%d is not prime\n", n);
 printf("Enter lower and upper limits: ");
 scanf("%d%d", &a, &b);
 printf("Prime numbers: ");
 for (i = a; i <= b; i++)
 {
 prime = (i >= 2);
 for (j = 2; j <= i / j && prime; j++)
 if (i % j == 0)
 prime = 0;
 if (prime)
 printf("%d ", i);
 }
 printf("\n");
 return 0;
}
