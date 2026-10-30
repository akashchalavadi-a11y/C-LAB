#include <stdio.h>
int main()
{
 int n, temp, digit, count = 0, sum = 0, rev = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 temp = n;
 do
 {
 digit = temp % 10;
 sum += digit;
 rev = rev * 10 + digit;
 count++;
 temp /= 10;
 } while (temp > 0);
 printf("Number of digits = %d\n", count);
 printf("Sum of digits = %d\n", sum);
 printf("Reversed number = %d\n", rev);
 if (n == rev)
 printf("Palindrome\n");
 else
 printf("Not a palindrome\n");
 return 0;
}
