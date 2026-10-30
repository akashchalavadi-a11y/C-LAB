#include <stdio.h>
int main()
{
 int n, temp, digit, count = 0, i;
 int sum = 0, power;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 temp = n;
 do
 {
 count++;
 temp /= 10;
 } while (temp > 0);
 temp = n;
 while (temp > 0)
 {
 digit = temp % 10;
 power = 1;
 for (i = 1; i <= count; i++)
 power *= digit;
 sum += power;
 temp /= 10;
 }
 if (sum == n)
 printf("Armstrong number\n");
 else
 printf("Not an Armstrong number\n");
 return 0;
}N
