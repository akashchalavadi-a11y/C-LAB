#include <stdio.h>
int gcd(int a, int b)
{
 if (b == 0)
 return a;
 return gcd(b, a % b);
}
long long factorial(int n)
{
 if (n <= 1)
 return 1;
 return n * factorial(n - 1);
}
long long power(int x, int n)
{
 if (n == 0)
 return 1;
 return x * power(x, n - 1);
}
int main()
{
 int ch, a, b, n, x;
 printf("1.GCD 2.LCM 3.Factorial 4.Power\n");
 printf("Enter choice: ");
 scanf("%d", &ch);
 switch (ch)
 {
 case 1:
 printf("Enter two integers: ");
 scanf("%d%d", &a, &b);
 printf("GCD = %d\n", gcd(a, b));
 break;
 case 2:
 printf("Enter two positive integers: ");
 scanf("%d%d", &a, &b);
 if (a <= 0 || b <= 0)
 printf("Invalid input\n");
 else
 printf("LCM = %d\n", (a / gcd(a, b)) * b);
 break;
 case 3:
 printf("Enter number (0-20): ");
 scanf("%d", &n);
 if (n < 0 || n > 20)
 printf("Invalid input\n");
 else
 printf("Factorial = %lld\n", factorial(n));
 break;
 case 4:
 printf("Enter base and exponent (0-30): ");
 scanf("%d%d", &x, &n);
 if (n < 0 || n > 30)
 printf("Invalid exponent\n");
 else
 printf("Power = %lld\n", power(x, n));
 break;
 default:
 printf("Invalid choice\n");
 }
 return 0;
}
